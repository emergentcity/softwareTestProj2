#include "musicLibrary.h"
#include "song.h"
#include "playlist.h"
#include "streamSong.h"
#include <iostream>
using namespace std;

int idSongCounter = 0;
int idListCounter = 0;

bool musicLibrary::createTempSongs() {
	song song1 = song();
	song1.setName("Bohemian Rhapsody");
	song1.setArtist("Queen");
	song1.toString();

	song song2 = song();
	song2.setName("Let It Be");
	song2.setArtist("The Beatles");

	song song3 = song();
	song3.setName("Welcome to the Black Parade");
	song3.setArtist("My Chemical Romance");

	song song4 = song();
	song4.setName("Somebody to Love");
	song4.setArtist("Queen");

	song song5= song();
	song5.setName("I Lost a Friend");
	song5.setArtist("Finneas");

	song song6 = song();
	song6.setName("Fix You");
	song6.setArtist("Coldplay");

	song song7= song();
	song7.setName("Death of a Bachelor");
	song7.setArtist("Panic! At The Disco");

	song song8 = song();
	song8.setName("Nothing Else Matters");
	song8.setArtist("Metallica");

	song song9 = song();
	song9.setName("Take Me Home, Country Roads");
	song9.setArtist("John Denver");

	song song10 = song();
	song10.setName("Take On Me");
	song10.setArtist("A-ha");

	addSong(song1);
	addSong(song2);
	addSong(song3);
	addSong(song4);
	addSong(song5);
	addSong(song6);
	addSong(song7);
	addSong(song8);
	addSong(song9);
	addSong(song10);

	return true;
}

bool musicLibrary::createTempPlaylist() {
	playlist list1 = playlist();
	list1.setName("Rock");
	playlist list2 = playlist();
	list2.setName("Punk");
	playlist list3 = playlist();
	list3.setName("Country");
	playlist list4 = playlist();
	list4.setName("Alternative");

	addPlaylist(list1);
	addPlaylist(list2);
	addPlaylist(list3);
	addPlaylist(list4);
	return true;
}

vector<song> musicLibrary::getSongs() {
	return this->songs;
}

vector<playlist> musicLibrary::getPlaylists() {
	return this->playlists;
}

string musicLibrary::printSongs() {
	for (song song : this->songs) {
		cout << "[" << song.getId() << "] " << song.getName() << " by " << song.getArtist() << endl;
	}
	return "";
}

string musicLibrary::printPlaylists() {
	for (playlist playlist : this->playlists) {
		cout << "[" << playlist.getId() << "] " << playlist.getName() << endl;
	}
	return "";
}

bool musicLibrary::addPlaylist(playlist playlist) {
	playlist.setId(idListCounter++);
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
	song.setId(idSongCounter++);
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

bool musicLibrary::addSongToPlaylist(song& song, int listId) {
	
	for (playlist list : this->playlists) {
		if (list.getId() == listId) {
			list.addSongToPlaylist(ref(song));
			list.printSongs();
		}
	}

	return true;
}

bool musicLibrary::searchSong(string search) {
	for (song song : this->songs) {
		if (search == song.getName()) {
			cout << "[" << song.getId() << "] " << song.getName() << " by " << song.getArtist() << endl;
		}
	}
	return true;
}

bool musicLibrary::searchPlaylist(string search) {
	for (playlist playlist : this->playlists) {
		if (search == playlist.getName()) {
			cout << "[" << playlist.getId() << "] " << playlist.getName() << endl;
		}
	}
	return true;
}

song musicLibrary::getSong(int id) {
	for (song song : this-> songs) {
		if (song.getId() == id) {
			return song;
		}
	}
}

playlist musicLibrary::getPlaylist(int id) {
	for (playlist playlist : this->playlists) {
		if (playlist.getId() == id) {
			return playlist;
		}
	}
}

