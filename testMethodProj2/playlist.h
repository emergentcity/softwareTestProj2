#pragma once
#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "song.h"
#include <string>
#include <vector>

class playlist
{


public:
	std::string name = "";
	std::vector<song> list;
	int id = 0;
	std::vector<song> getList();
	std::string getName();
	void setName(std::string name);

	int playlist::getId();
	void setId(int id);
	bool addSongToPlaylist(song& song);
	bool removeSongToPlaylist(int id);
	std::string printSongs();
};

#endif
