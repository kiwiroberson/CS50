SELECT DISTINCT title from stars
JOIN stars ON movies.id = stars.movie_id
JOIN people on stars.person_id = people.id
WHERE people.name = "Bradley Cooper" OR people.name = "Jennifer Lawrence"

