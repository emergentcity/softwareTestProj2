#pragma once
#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "song.h"
#include <string>
#include <vector>

class playlist
{
private:
	std::string name = "";
	std::vector<song> list;
	int id = 0;

public:
	std::vector<song> getList();
	std::string getName();
	void setName(std::string name);

	int playlist::getId();
	void setId(int id);
	bool addSongToPlaylist(song song);
	bool removeSongToPlaylist(int id);
};

#endif
