from cs50 import SQL
import csv

#open database
db = SQL("sqlite:///roster.db")

#open students.csv
with open("students.csv", "r") as file:
    reader =  csv.DictReader(file)
    #iterate over rows
    for row in reader:
        print(row["id"])
        #insert id and name into students table1 via SQLite3
        db.execute("INSERT INTO students1 (id, student_name) VALUES (?, ?)", row["id"], row["student_name"])
        db.execute("INSERT INTO students1 (id, student_name) VALUES (?, ?)", row["id"], row["student_name"])


        #insert house name and head into table2
        #insert house allocation information into table3
