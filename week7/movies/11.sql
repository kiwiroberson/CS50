SELECT DISTINCT movie_id from stars
JOIN stars ON stars.movie_id= movies.id
JOIN people on stars.person_id = people.id
WHERE people.name = "Bradley Cooper" OR people.name = "Jennifer Lawrence"

