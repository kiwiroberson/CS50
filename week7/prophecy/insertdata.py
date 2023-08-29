from cs50 import SQL
import csv

#open database
db = SQL("sqlite:///roster.db")
houses = []
heads = []
#open students.csv
with open("students.csv", "r") as file:
    reader =  csv.DictReader(file)
    for row in reader:
        if row["house"] not in houses:
            houses.append(row["house"])
        if row["head"] not in heads:
            heads.append(row["head"])

    for row in reader
        #insert id and name into students table1 via SQLite3
        db.execute("INSERT INTO students (id, student_name) VALUES (?, ?)", row["id"], row["student_name"])
        #insert house name and head into table2
        for i in range(4):
            db.execute("INSERT INTO house (id, house) VALUES (?, ?)", houses[i], heads[i])
        #insert house allocation information into table3
        db.execute("INSERT INTO house_assignment (student_id, house_id) VALUES (?, ?)", row["id"], houses.index(row["house"]))