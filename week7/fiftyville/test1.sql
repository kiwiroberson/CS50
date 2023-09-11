SELECT *
FROM people
JOIN phone_calls ON  people.phone_number = phone_calls.receiver
WHERE year = "2021"
AND month = "7"
AND day = "28"
AND duration = 45