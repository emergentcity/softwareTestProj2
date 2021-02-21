#include <iostream>
#include "localSong.h"

using namespace std;

string localSong::toString() {
	string print = "Name: " + this->getName() + ", Artist: " + this->getArtist();
	cout << print << endl;
	return print;
}

string localSong::getName() {
	cout << "Calling Derived Function." << endl;
	return this->name;
}