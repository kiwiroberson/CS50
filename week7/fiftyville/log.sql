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
    -- avenue #1: left car park in 10 mins after theft

    -- avenue 2: 

