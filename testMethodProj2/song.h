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
	song() = default;
	song(const song&);
	song& operator=(const song&) = default;

	friend class playlist;
	std::string toString();

	virtual int getId();
	virtual void setId(int id);

	virtual std::string getName();
	virtual void setName(std::string name);

	virtual std::string getArtist();
	virtual void setArtist(std::string artist);

	virtual ~song() = default;

};

#endif
