-- Keep a log of any SQL queries you execute as you solve the mystery.
--  July 28, 2021 and that it took place on Humphrey Street.
-- Query description from crime_scene_reports
SELECT description
FROM crime_scene_reports
WHERE year = "2021"
AND month = "7"
AND day = "28"
AND street  = "Humphrey Street"

-- reports theft of duck at 10:15am, three witnesses all interview transcripts mention bakery
--query interview database
SELECT id, name, transcript
FROM interviews
WHERE year = "2021"
AND month = "7"
AND day = "28"

    -- avenue #1: left car park in 10 mins after theft - security footage
SELECT bakery_security_logs.id, hour, minute, activity, bakery_security_logs.license_plate, name
FROM bakery_security_logs
JOIN people ON bakery_security_logs.license_plate = people.license_plate
WHERE year = "2021"
AND month = "7"
AND day = "28"
         --   | 260 | 10   | 16     | exit     | 5P2BI95       | Vanessa |
        --    | 261 | 10   | 18     | exit     | 94KL13X       | Bruce   |
          --  | 262 | 10   | 18     | exit     | 6P58WS2       | Barry   |
         --   | 263 | 10   | 19     | exit     | 4328GD8       | Luca    |
         --   | 264 | 10   | 20     | exit     | G412CB7       | Sofia   |
         --   | 265 | 10   | 21     | exit     | L93JTIZ       | Iman    |
          --  | 266 | 10   | 23     | exit     | 322W7JE       | Diana   |
         --   | 267 | 10   | 23     | exit     | 0NTHK55       | Kelsey  |


    --avenue #2: In morning theif withdrawing money at ATM in Legett street

    -- avenue #3: as leaving bakery theif called someone for less than a minute,
    --              planned to take earliest outward flight on 29/7/21 - accomplice  person buying ticket



