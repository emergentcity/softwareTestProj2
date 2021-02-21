
#include <iostream>
#include "song.h"

using namespace std;

song::song(const song&) {
	cout << "Calling Synthetic Copy Constructor" << endl;
}

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
	cout << "Calling Base Function." << endl;
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