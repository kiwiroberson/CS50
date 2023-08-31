SELECT name
FROM people
JOIN passengers ON  people.passport_number = passengers.passport_number
