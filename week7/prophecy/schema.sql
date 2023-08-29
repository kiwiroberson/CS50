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

CREATE TABLE link (
    student_id INTEGER,
    house_id INTEGER,
    FOREIGN KEY student_id students(id)
    FOREIGN KEY house_id house(id)
);