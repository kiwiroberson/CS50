SELECT bakery_security_logs.id, hour, minute, activity, bakery_security_logs.license_plate, name
FROM bakery_security_logs
JOIN people ON bakery_security_logs.license_plate = people.license_plate
WHERE year = "2021"
AND month = "7"
AND day = "28"

