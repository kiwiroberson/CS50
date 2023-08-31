SELECT people.name from movies
JOIN stars ON movies.id = stars.movie_id
JOIN people on stars.person_id = people.id
WHERE year = "2004"
ORDER BY birth
