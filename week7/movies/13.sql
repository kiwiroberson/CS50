SELECT name
FROM movies
JOIN stars ON movies.id = stars.movie_id
JOIN people on stars.person_id = people.id
WHERE name IN
    (SELECT name
     FROM movies
     JOIN stars ON movies.id = stars.movie_id
     JOIN people on stars.person_id = people.id
     WHERE people.name = "Kevin Bacon")
