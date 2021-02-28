#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "startApplication.h"
#include "musicLibrary.h"
#include <string>
#include <chrono>

/*
using namespace std;
using namespace std::chrono;
*/

musicLibrary library = musicLibrary();

// startBLock

TEST(startApplicationTest, startBlock_normalCall_true) {
	EXPECT_EQ(startApplication::startBlock(), "login screen");
}

// homeBlock

TEST(startApplicationTest, homeBlock_validName_true) {
	EXPECT_EQ(startApplication::homeBlock("username"), "home screen");
}

TEST(startApplicationTest, homeBlock_emptyString_true) {
	EXPECT_EQ(startApplication::homeBlock(""), "home screen");
}

// librarySelectionBlock

TEST(startApplicationTest, librarySelectionBlock_validName_true) {
	EXPECT_EQ(startApplication::librarySelectionBlock("username"), "library screen");
}

TEST(startApplicationTest, librarySelectionBlock_emptyName_true) {
	EXPECT_EQ(startApplication::librarySelectionBlock(""), "library screen");
}

// 

// listAllSong

TEST(startApplicationTest, listAllSong_validSongs_true) {
	library = musicLibrary();
	library.createTempSongs();
	EXPECT_EQ(startApplication::listAllSong(library), "song list screen");
}

TEST(startApplicationTest, listAllSong_noPlaylists_true) {
	library = musicLibrary();
	EXPECT_EQ(startApplication::listAllSong(library), "song list screen");
}

// listAllPlaylist
TEST(startApplicationTest, listAllPlaylist_validPlaylists_true) {
	library = musicLibrary();
	library.createTempPlaylist();
	EXPECT_EQ(startApplication::listAllPlaylist(library), "playlist list screen");
}

TEST(startApplicationTest, listAllPlaylist_noPlaylists_true) {
	library = musicLibrary();
	EXPECT_EQ(startApplication::listAllPlaylist(library), "playlist list screen");
}

// searchSongs

TEST(startApplicationTest, searchSongs_searchingNonexistent_true) {
	library = musicLibrary();
	library.createTempSongs();
	EXPECT_EQ(startApplication::searchSongs(library, "search"), "search song screen");
}

TEST(startApplicationTest, searchSongs_searchingExisting_true) {
	library = musicLibrary();
	library.createTempPlaylist();
	EXPECT_EQ(startApplication::searchSongs(library, "Welcome To The Black Parade"), "search song screen");
}

TEST(startApplicationTest, searchSongs_searchingNone_true) {
	library = musicLibrary();
	library.createTempPlaylist();
	EXPECT_EQ(startApplication::searchSongs(library, ""), "search song screen");
}

// searchPlaylists

TEST(startApplicationTest, searchPlaylists_searchingNonexistent_true) {
	library = musicLibrary();
	library.createTempPlaylist();
	EXPECT_EQ(startApplication::searchPlaylists(library, "search"), "search playlist screen");
}

TEST(startApplicationTest, searchPlaylists_searchingExisting_true) {
	library = musicLibrary();
	library.createTempPlaylist();
	EXPECT_EQ(startApplication::searchPlaylists(library, "Welcome To The Black Parade"), "search playlist screen");
}

TEST(startApplicationTest, searchPlaylists_searchingNone_true) {
	library = musicLibrary();
	library.createTempPlaylist();
	EXPECT_EQ(startApplication::searchPlaylists(library, ""), "search playlist screen");
}
