SELECT AVG(energy) FROM songs
JOIN artists on songs.artist_id = artists.id
WHERE artists.name = "Drake";