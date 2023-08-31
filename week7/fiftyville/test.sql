SELECT name
FROM people
JOIN passengers ON  people.passport_number = passengers.passport_number
JOIN flights ON passengers.flight_id = flights.id
WHERE year = "2021"
AND month = "7"
AND day = "29"

AND name IN
(
SELECT name
FROM people
JOIN phone_calls ON  people.phone_number = phone_calls.caller
WHERE year = "2021"
AND month = "7"
AND day = "28"
AND duration < 60
)

AND name IN
(
SELECT name
FROM atm_transactions
JOIN bank_accounts ON atm_transactions.account_number = bank_accounts.account_number
JOIN people ON bank_accounts.person_id = people.id
WHERE year = "2021"
AND month = "7"
AND day = "28"
AND atm_location = "Leggett Street"
)

AND name IN
(
SELECT name
FROM bakery_security_logs
JOIN people ON bakery_security_logs.license_plate = people.license_plate
WHERE year = "2021"
AND month = "7"
AND day = "28"
)


