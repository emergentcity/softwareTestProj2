
#include <iostream>
#include "song.h"

using namespace std;


string song::toString() {
	return "";
}

int song::getId() {
	return this->id;
}

void song::setId(int id) {
	this->id = id;
}

string song::getName() {

	return this->name;
}

void song::setName(string name) {
	this->name = name;
}

string song::getArtist() {
	return this->artist;
}

void song::setArtist(string artist) {
	this->artist = artist;
}