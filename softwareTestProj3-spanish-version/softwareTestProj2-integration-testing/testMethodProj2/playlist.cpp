#include "playlist.h"
#include "song.h"
#include <iostream>

using namespace std;

vector<song> playlist::getList() {
	return this->list;
}

string playlist::getName() {
	return this->name;
}

void playlist::setName(std::string name) {
	this->name = name;
}

int playlist::getId() {
	return this->id;
}

void playlist::setId(int id) {
	this->id = id;
}

bool playlist::addSongToPlaylist(song& song) {
	cout << "Adding to playlist." << endl;
	this->list.push_back(song);
	return true;
}

bool playlist::removeSongToPlaylist(int id) {
	cout << "Remove from playlist." << endl;
	int id2 = 0;
	vector<song> newPlayList = vector<song>();
	for (auto& song : this->list) {
		if (song.getId() != id) {
			newPlayList.push_back(song);
		}
	}
	this->list = newPlayList;
	return true;
}

string playlist::printSongs() {
	cout << "Contains: " << endl;
	for (song song : this->list) {
		cout << song.getName() << " by " << song.getArtist() << endl;
	}
	return "";
}