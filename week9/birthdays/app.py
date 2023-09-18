import os

from cs50 import SQL
from flask import Flask, flash, jsonify, redirect, render_template, request, session

# Configure application
app = Flask(__name__)

# Ensure templates are auto-reloaded
app.config["TEMPLATES_AUTO_RELOAD"] = True

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///birthdays.db")

@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response

@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "POST":
        #load data from form
        if request.form.get("name") != '':
            name = request.form.get("name")
            day = request.form.get("day")
            month = request.form.get("month")
            #remember submitted birthday
            db.execute("INSERT INTO birthdays (name, day, month) VALUES(?, ?, ?)", name, day, month)
        if request.form.get("id") != '':
            test = request.form.get("id")
            #delete selected record
            db.execute("DELETE FROM birthdays WHERE id='?'", test)
        return redirect("/")

    else:
        people = db.execute("SELECT * FROM birthdays")
        return render_template("index.html", people=people)







