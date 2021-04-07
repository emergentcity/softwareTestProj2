#pragma once
#ifndef SONG_H
#define SONG_H
#include <string>
#include "abstractSong.h"

enum Genre { pop, classical, rock, instrumental };
class song : public abstractSong
{
private:

	Genre genre = pop;

protected:
	std::string name = "";
	std::string artist = "";
	int id = 0;

public:

	friend class playlist;
	std::string toString();

	int getId();
	void setId(int id);

	std::string getName();
	void setName(std::string name);

	std::string getArtist();
	void setArtist(std::string artist);

};

#endif
