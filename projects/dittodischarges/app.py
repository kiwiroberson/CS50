import os
import sqlite3

from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session
from flask_session import Session
from werkzeug.security import check_password_hash, generate_password_hash
from datetime import datetime

from helpers import apology, login_required

# Configure application
app = Flask(__name__)

# Configure session to use filesystem (instead of signed cookies)
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///discharge.db")

diagnosistable=[]
db.execute("SELECT * FROM diagnosis;")

#sql query by cursor
dischargedb = sqlite3.connect("discharge.db")

cursor = dischargedb.cursor()
query = "SELECT * FROM diagnosis;"
cursor.execute(query)
diagnosistable = cursor.fetchall()

for row in diagnosistable:
    print(row)

#define discharge block class
for row in diagnosistable:
    class dischargeblock:
        def __init__(self):
            self.index = row[0]
            self.diagnosis = row[1]
            self.rootquestion = row[8]
            self.diagcoderoot
            self.code1
            self.question1
            self.answer1
            self.code2
            self.question2
            self.answer2
            self.code3
            self.question3
            self.answer3
            self.code4
            self.question4
            self.answer4
            self.code5
            self.question5
            self.answer5




@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response

@app.route("/", methods=["GET", "POST"])
@login_required
def index():
    if request.method == "POST":
        return
    else:
        index = db.execute("SELECT * FROM neonataldc")
        diagnoses=[]

        for record in index:
            if record['diagnosis'] not in diagnoses:
                diagnoses.append(record['diagnosis'])
        print(diagnoses)
        return render_template("index.html", diagnoses=diagnoses)

@app.route("/discharge", methods=["GET", "POST"])
@login_required
def discharge():
    if request.method == "POST":

        return
    else:
        return redirect("/")






@app.route("/login", methods=["GET", "POST"])
def login():
    """Log user in"""

    # Forget any user_id
    session.clear()

    # User reached route via POST (as by submitting a form via POST)
    if request.method == "POST":

        # Ensure username was submitted
        if not request.form.get("username"):
            return apology("must provide username", 400)

        # Ensure password was submitted
        elif not request.form.get("password"):
            return apology("must provide password", 400)

        # Query database for username
        rows = db.execute("SELECT * FROM users WHERE username = ?", request.form.get("username"))

        # Ensure username exists and password is correct
        if len(rows) != 1 or not check_password_hash(rows[0]["hash"], request.form.get("password")):
            return apology("invalid username and/or password", 400)

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




@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user"""
    if request.method == "POST":

        # Ensure new username was submitted
        if not request.form.get("username"):
            return apology("New username not entered", 400)
        # ensure new username not already taken
        rows = db.execute("SELECT * FROM users WHERE username = ?", request.form.get("username"))
        if len(rows) == 1:
            return apology("Username already taken", 400)

        #ensure new password entered
        if not request.form.get("password"):
            return apology("New password not entered", 400)

        ##nsure confirmation is entered

        if not request.form.get("confirmation"):
            return apology("Confirmation not entered", 400)

        #ensure password confimation matches initial password

        if request.form.get("password") != request.form.get("confirmation"):
            return apology("Passwords do not match", 400)

        #insert new username and password into db

        username = request.form.get("username")
        password = request.form.get("password")

        db.execute("INSERT INTO users (username, hash) VALUES (?, ?)", username, generate_password_hash(password))

        # Redirect user to home page
        return redirect("/")

    # User reached route via GET (as by clicking a link or via redirect)
    else:
        return render_template("register.html")

