SELECT songs.name FROM songs
JOIN artists on songs.artist_id = artists.id
WHERE songs.name LIKE "%feat.%";