#pragma once
#ifndef STREAMSONG_H
#define STREAMSONG_H
#include "song.h"
#include <string>
class streamSong : public song
{
private:
	double streamBitRate = 0.0;
public:
	std::string toString();
	double getStreamBitRate();
	void setStreamBitRate(double streamBitRate);

};
#endif


