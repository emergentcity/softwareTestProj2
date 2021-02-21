#pragma once
#ifndef STARTAPPLICATION_H
#define STARTAPPLICATION_H
#include <string>
#include "musicLibrary.h"
#include <iostream>

using namespace std;
class startApplication {
public:
	static bool checkNumber(string str) {
		for (int i = 0; i < str.length(); i++)
			if (isdigit(str[i]) == false)
				return false;
		return true;
	}

	static bool startBlock() {
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		cout << "|                                    WELCOME TO MUSICIFY                                 |" << endl;
		cout << "|          Your Music Library all here and stuff.                                        |" << endl;
		cout << "|          Select the following to begin.                                                |" << endl;
		cout << "|                                                                                        |" << endl;
		cout << "|          1. (Developer Version) To run Diagnostics.                                    |" << endl;
		cout << "|          2. Open you Library.                                                          |" << endl;
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		return true;

	}

	static bool librarySelectionBlock() {
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		cout << "|          You may do the following in your library: [Your Name Here]                    |" << endl;
		cout << "|          1. List All Songs.                                                            |" << endl;
		cout << "|          2. Search Song Details.                                                       |" << endl;
		cout << "|          3. List All Playlists.                                                        |" << endl;
		cout << "|          3. Search Playlist Details.                                                   |" << endl;
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		return true;
	}

	static bool listAllSong(musicLibrary library) {
		cout << "List of all your music." << endl;
		return true;
	}
};

#endif