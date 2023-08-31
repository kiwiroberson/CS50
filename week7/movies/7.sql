SELECT title, rating from movies
JOIN ratings ON movies.id = ratings.movie_id
WHERE rating IS null
ORDER BY rating DESC, title
LIMIT 10


