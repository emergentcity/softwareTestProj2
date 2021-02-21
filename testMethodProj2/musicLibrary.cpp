#include "musicLibrary.h"
#include "song.h"
#include "playlist.h"
#include <iostream>
using namespace std;

vector<song> musicLibrary::getSongs() {
	return this->songs;
}

vector<playlist> musicLibrary::getPlaylists() {
	return this->playlists;
}

string musicLibrary::printSongs() {
	for (song song : this->songs) {
		cout << song.getName() << " by " << song.getArtist() << endl;
	}
	return "";
}

string musicLibrary::printPlaylists() {
	for (playlist playlist : this->playlists) {
		cout << playlist.getName() << endl;
	}
	return "";
}

bool musicLibrary::addPlaylist(playlist playlist) {
	cout << "Adding to playlist." << endl;
	this->playlists.push_back(playlist);
	return true;
}

bool musicLibrary::removePlaylist(int id) {
	int id2 = 0;
	vector<playlist> newPlaylists = vector<playlist>();
	for (auto& playlist : this->playlists) {
		if (playlist.getId() != id) {
			newPlaylists.push_back(playlist);
		}
	}
	this->playlists = newPlaylists;
	return true;
}

bool musicLibrary::addSong(song song) {
	this->songs.push_back(song);
	return true;
}

bool musicLibrary::removeSong(int id) {
	int id2 = 0;
	vector<song> newSongs = vector<song>();
	for (auto& song : this->songs) {
		if (song.getId() != id) {
			newSongs.push_back(song);
		}
	}
	this->songs = newSongs;
	return true;
}

