#pragma once
#ifndef LOCALSONG_H
#define LOCALSONG_H
#include "song.h"
#include <string>

class localSong : public song
{
public:
	std::string toString() final;
	std::string getName();
protected:
	using song::id;

};
#endif


