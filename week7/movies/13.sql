SELECT DISTINCT name
FROM movies
JOIN stars ON movies.id = stars.movie_id
JOIN people on stars.person_id = people.id
AND title IN
    (SELECT DISTINCT title
     FROM movies
     JOIN stars ON movies.id = stars.movie_id
     JOIN people on stars.person_id = people.id
     WHERE people.name = "Kevin Bacon")
