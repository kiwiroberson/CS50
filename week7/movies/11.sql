SELECT DISTINCT title from movies
JOIN stars ON movies.id = stars.movie_id
JOIN people on stars.person_id = people.id
WHERE people.name = "Bradley Cooper"
OR people.name = "Jennifer Lawrence"

