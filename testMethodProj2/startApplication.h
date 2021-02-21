#pragma once
#ifndef STARTAPPLICATION_H
#define STARTAPPLICATION_H
#include <cstdio>
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
		cout << "|          Please log in to your account to proceed.                                     |" << endl;
		cout << "|----------------------------------------------------------------------------------------|" << endl;

		return true;

	}

	static bool homeBlock(string userName) {
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		cout << "|                             WELCOME TO MUSICIFY, " << userName << "!                   " << endl;
		cout << "|          Your Music Library all here and stuff.                                        |" << endl;
		cout << "|          Select the following to begin.                                                |" << endl;
		cout << "|                                                                                        |" << endl;
		cout << "|          1. (Developer Version) To run Diagnostics.                                    |" << endl;
		cout << "|          2. Open you Library.                                                          |" << endl;
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		return true;
	}

	static bool selectionSection(string userName, musicLibrary library) {
		librarySelectionBlock(userName);
		string input;
		getline(cin, input);
		if (input == "1") {
			listAllSong(library);
		}
		else if (input == "2") {
		}
		else if (input == "3") {
			listAllPlaylist(library);
		}
		else if (input == "4") {

		}
		return true;
	}

	static bool librarySelectionBlock(string userName) {
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		cout << "|          You may do the following in your library: " << userName << "                  |" << endl;
		cout << "|          1. List All Songs.                                                            |" << endl;
		cout << "|          2. Search Song Details.                                                       |" << endl;
		cout << "|          3. List All Playlists.                                                        |" << endl;
		cout << "|          4. Search Playlist Details.                                                   |" << endl;
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		return true;
	}

	static bool listAllSong(musicLibrary library) {
		cout << "-------------- List of all your music. ----------------" << endl;
		library.printSongs();
		return true;
	}

	static bool listAllPlaylist(musicLibrary library) {
		cout << "-------------- List of all your Playlists. ----------------" << endl;
		library.printPlaylists();
		return true;
	}
};

#endif