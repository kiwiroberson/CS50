import os

from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session
from flask_session import Session
from werkzeug.security import check_password_hash, generate_password_hash
from datetime import datetime

from helpers import apology, login_required, lookup, usd

# Configure application
app = Flask(__name__)

# Custom filter
app.jinja_env.filters["usd"] = usd

# Configure session to use filesystem (instead of signed cookies)
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///finance.db")


@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/")
@login_required
def index():
    """Show portfolio of stocks"""
    userid = session["user_id"]
    index = db.execute("SELECT * FROM portfolio WHERE userid=?",userid)
    for item in index:
        print(item['price'])
    return render_template("index.html")


@app.route("/buy", methods=["GET", "POST"])
@login_required
def buy():
    """Buy shares of stock"""
    if request.method == "POST":
        #test stock symbol filled in
        if not request.form.get("symbol"):
            return apology("Stock blank", "701")
        #test stock exists
        if not lookup(request.form.get("symbol")):
            return apology("Stock not valid", "702")
        #test shares positive
        if int(request.form.get("shares")) < 1:
            return apology("Shares not positive", "703")

        #collect potential transaction details
        userid = session["user_id"]
        stockdetails = lookup(request.form.get("symbol"))
        stock = stockdetails["symbol"]
        shares = int(request.form.get("shares"))
        price = stockdetails["price"]
        date = datetime.now()

        #check enough cash available
        balance = db.execute("SELECT cash FROM users WHERE id=?",userid)
        print(balance[0]['cash'])
        totalcost = float(shares) * float(price)
        remainingfunds = float(balance[0]['cash']) - totalcost
        if remainingfunds < 0:
            return apology("Not enough funds", "704")

        #deduct funds and buy stock
        db.execute("UPDATE users SET cash=? WHERE id=?", remainingfunds, userid)
        db.execute("INSERT INTO portfolio (userid, stock, shares, price, date) VALUES (?, ?, ?, ?, ?)", userid, stock, shares, price, date)

        return redirect("/")






    else:
        return render_template("buy.html")



@app.route("/history")
@login_required
def history():
    """Show history of transactions"""
    return apology("TODO")


@app.route("/login", methods=["GET", "POST"])
def login():
    """Log user in"""

    # Forget any user_id
    session.clear()

    # User reached route via POST (as by submitting a form via POST)
    if request.method == "POST":

        # Ensure username was submitted
        if not request.form.get("username"):
            return apology("must provide username", 403)

        # Ensure password was submitted
        elif not request.form.get("password"):
            return apology("must provide password", 403)

        # Query database for username
        rows = db.execute("SELECT * FROM users WHERE username = ?", request.form.get("username"))

        # Ensure username exists and password is correct
        if len(rows) != 1 or not check_password_hash(rows[0]["hash"], request.form.get("password")):
            return apology("invalid username and/or password", 403)

        # Remember which user has logged in
        session["user_id"] = rows[0]["id"]

        # Redirect user to home page
        return redirect("/")

    # User reached route via GET (as by clicking a link or via redirect)
    else:
        return render_template("login.html")


@app.route("/logout")
def logout():
    """Log user out"""

    # Forget any user_id
    session.clear()

    # Redirect user to login form
    return redirect("/")


@app.route("/quote", methods=["GET", "POST"])
@login_required
def quote():
    """Get stock quote."""
    if request.method == "POST":
        #get stock price label from form
        symbol = request.form.get("symbol")
        stockdetails = lookup(symbol)

        #forward symbol and price to 'quoted'
        return render_template("quoted.html", symbol=stockdetails["symbol"], price=usd(stockdetails["price"]))
    else:

        return render_template("quote.html")



@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user"""
    if request.method == "POST":

        # Ensure new username was submitted
        if not request.form.get("username"):
            return apology("New username not entered", 501)
        # ensure new username not already taken
        rows = db.execute("SELECT * FROM users WHERE username = ?", request.form.get("username"))
        if len(rows) == 1:
            return apology("Username already taken", 502)

        #ensure new password entered
        if not request.form.get("password"):
            return apology("New password not entered", 503)

        ##nsure confirmation is entered

        if not request.form.get("confirmation"):
            return apology("Confirmation not entered", 504)

        #ensure password confimation matches initial password

        if request.form.get("password") != request.form.get("confirmation"):
            return apology("Passwords do not match", 505)

        #insert new username and password into db

        username = request.form.get("username")
        password = request.form.get("password")

        db.execute("INSERT INTO users (username, hash) VALUES (?, ?)", username, generate_password_hash(password))

        # Redirect user to home page
        return redirect("/")

    # User reached route via GET (as by clicking a link or via redirect)
    else:
        return render_template("register.html")


@app.route("/sell", methods=["GET", "POST"])
@login_required
def sell():
    """Sell shares of stock"""
    return apology("TODO")
