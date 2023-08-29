from cs50 import SQL
import csv

#open database
db = SQL("sqlite:///roster.db")
houses = []
#open students.csv
with open("students.csv", "r") as file:
    reader =  csv.DictReader(file)
    for row in reader:
        if row["house"] not in houses:
            houses.append(row["house"])

    for row in reader
        #insert id and name into students table1 via SQLite3
        db.execute("INSERT INTO students (id, student_name) VALUES (?, ?)", row["id"], row["student_name"])
# #db.execute("INSERT INTO students (id, student_name) VALUES (?, ?)", row["id"], row["student_name"])


#insert house name and head into table2
#insert house allocation information into table3
