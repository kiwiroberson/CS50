SELECT title, rating from movies
JOIN ratings ON movies.id = ratings.movie_id
WHERE year = "2010"
    AND rating = "NULL"
ORDER BY rating DESC, title
LIMIT 10


