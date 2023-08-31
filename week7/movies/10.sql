SELECT people.name from movies
JOIN ratings ON movies.id = ratings.movie_id
JOIN directors ON movies.id = directors.movie_id
JOIN people on directors.person_id = people.id
WHERE rating >= "9.0"
