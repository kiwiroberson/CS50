SELECT name
FROM people
JOIN phone_calls ON  = phone_calls.
JOIN people ON bank_accounts.person_id = people.id
WHERE year = "2021"
AND month = "7"
AND day = "28"
AND atm_location = "Leggett Street"
