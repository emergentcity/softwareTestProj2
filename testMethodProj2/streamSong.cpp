
#include "streamSong.h"
#include <iostream>
#include "song.h"

using namespace std;

/*
streamSong::streamSong(const song& song) {
	song::song(song);
}
*/

string streamSong::toString() {
	string print = "Name: " + this->getName() + ", Artist: " + this->getArtist() +
		", Bandwidth: " + to_string(this->getStreamBitRate());
	cout << print << endl;
	return print;
}

double streamSong::getStreamBitRate() {
	return this->streamBitRate;
}

void streamSong::setStreamBitRate(double streamBitRate) {
	this->streamBitRate = streamBitRate;
}