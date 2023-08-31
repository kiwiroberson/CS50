SELECT name
FROM people
JOIN passengers ON  people.passport_number = passengers.passport_number
JOIN flights ON passengers.flight_id = flights.id
WHERE year = "2021"
AND month = "7"
AND day = "29"


