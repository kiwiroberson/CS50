SELECT name
FROM people
JOIN flights ON  people.pho = phone_calls.caller
WHERE year = "2021"
AND month = "7"
AND day = "28"
AND duration < 60
