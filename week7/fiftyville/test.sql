SELECT name
FROM people
JOIN passengers ON  people.passport_number = passengers.passport_number
JOIN flights ON passengers.flight_id = flights.id
WHERE year = "2021"
AND month = "7"
AND day = "29"

WHERE name
FROM
(
JOIN phone_calls ON  people.phone_number = phone_calls.caller
WHERE year = "2021"
AND month = "7"
AND day = "28"
AND duration < 60
)


