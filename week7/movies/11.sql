SELECT title from movies
JOIN stars ON movies.id = stars.movie_id
JOIN people on stars.person_id = people.id
WHERE people.name = "Bradley Cooper"
AND people.name = "Jennifer Lawrence"

