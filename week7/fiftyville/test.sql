SELECT name
FROM atm_transactions
JOIN bank_accounts ON atm_transactions.account_number = bank_accounts.account_number
JOIN people ON bank_accounts.person_id = people.id
WHERE year = "2021"
AND month = "7"
AND day = "28"
AND atm_location = "Leggett Street"
