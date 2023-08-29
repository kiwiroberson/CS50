CREATE TABLE students (
    id INTEGER,
    student_name TEXT,
    PRIMARY KEY(id)
);

CREATE TABLE house (
    id INTEGER,
    house TEXT,
    head TEXT,
    PRIMARY KEY(id)
);

CREATE TABLE house_assignment (
    student_id INTEGER,
    house_id INTEGER,
    FOREIGN KEY(student_id) REFERENCES students(id),
    FOREIGN KEY(house_id) REFERENCES house(id)
);