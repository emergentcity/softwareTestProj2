#pragma once
#ifndef MUSICLIBRARY_H
#define MUSICLIBRARY_H
#include <string>
#include <vector>
#include "song.h"
#include "playlist.h"

class musicLibrary
{
private:
	std::vector <song> songs;
	std::vector <playlist> playlists;

public:
	std::vector<song> getSongs();
	std::vector<playlist> getPlaylists();

	std::string printSongs();
	std::string printPlaylists();

	bool createTempSongs();
	bool createTempPlaylist();

	bool addPlaylist(playlist playlist);
	bool removePlaylist(int id);
	bool addSong(song song);
	bool removeSong(int id);

	bool searchSong(std::string search);
	bool searchPlaylist(std::string search);

	song getSong(int id);
	playlist getPlaylist(int id);
};

#endif
