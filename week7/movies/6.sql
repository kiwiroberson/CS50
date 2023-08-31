SELECT AVG(ratings.rating) FROM ratings
JOIN ratings ON movies.id = ratings.movies_id
WHERE year = "2012"