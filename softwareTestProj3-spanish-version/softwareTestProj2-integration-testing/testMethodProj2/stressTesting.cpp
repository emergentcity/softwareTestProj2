//#include "gtest/gtest.h"
//#include "gmock/gmock.h"
//#include "startApplication.h"
//#include "musicLibrary.h"
//#include "playlist.h"
//#include "song.h"
//#include <string>
//#include <chrono>
//
//musicLibrary libraryStress = musicLibrary();
//
//// Adding Songs
//TEST(stressTesting, addSong_add40Songs_50totalSongs) {
//	libraryStress = musicLibrary();
//	libraryStress.createTempSongs();
//	song newSong = song();
//	newSong.setName("new song");
//	newSong.setArtist("new artist");
//	for (int i = 0; i < 40; i++) {
//		libraryStress.addSong(newSong);
//	}
//	EXPECT_EQ(libraryStress.getSongs().size(), 50);
//}
//
//TEST(stressTesting, addSong_add100Songs_110totalSongs) {
//	libraryStress = musicLibrary();
//	libraryStress.createTempSongs();
//	song newSong = song();
//	newSong.setName("new song");
//	newSong.setArtist("new artist");
//	for (int i = 0; i < 100; i++) {
//		libraryStress.addSong(newSong);
//	}
//	EXPECT_EQ(libraryStress.getSongs().size(), 110);
//}
//
//TEST(stressTesting, addSong_add1000Songs_1010totalSongs) {
//	libraryStress = musicLibrary();
//	libraryStress.createTempSongs();
//	song newSong = song();
//	newSong.setName("new song");
//	newSong.setArtist("new artist");
//	for (int i = 0; i < 1000; i++) {
//		libraryStress.addSong(newSong);
//	}
//	EXPECT_EQ(libraryStress.getSongs().size(), 1010);
//}
//
//// Removing Songs
//TEST(stressTesting, removeSong_remove50Songs_0totalSongs) {
//	libraryStress = musicLibrary();
//	libraryStress.createTempSongs();
//	song newSong = song();
//	newSong.setName("new song");
//	newSong.setArtist("new artist");
//	for (int i = 0; i < 40; i++) {
//		libraryStress.addSong(newSong);
//	}
//	
//	for (int i = 1200; i < 1250; i++) {
//		libraryStress.removeSong(i);
//	}
//	
//	EXPECT_EQ(libraryStress.getSongs().size(), 0);
//}
//
//TEST(stressTesting, removeSong_remove110Songs_0totalSongs) {
//	libraryStress = musicLibrary();
//	libraryStress.createTempSongs();
//	song newSong = song();
//	newSong.setName("new song");
//	newSong.setArtist("new artist");
//	for (int i = 0; i < 100; i++) {
//		libraryStress.addSong(newSong);
//	}
//	for (int i = 1200; i < 1360; i++) {
//		libraryStress.removeSong(i);
//	}
//
//	EXPECT_EQ(libraryStress.getSongs().size(), 0);
//}
//
//TEST(stressTesting, removeSong_remove1010Songs_0totalSongs) {
//	libraryStress = musicLibrary();
//	libraryStress.createTempSongs();
//	song newSong = song();
//	newSong.setName("new song");
//	newSong.setArtist("new artist");
//	for (int i = 0; i < 1000; i++) {
//		libraryStress.addSong(newSong);
//	}
//	for (int i = 1200; i < 2370; i++) {
//		libraryStress.removeSong(i);
//	}
//	EXPECT_EQ(libraryStress.getSongs().size(), 0);
//}
//
//// Adding Playlists
//TEST(stressTesting, addPlaylist_add40Playlists_44totalPlaylist) {
//	libraryStress = musicLibrary();
//	libraryStress.createTempPlaylist();
//	playlist list = playlist();
//	list.setName("new list");
//	for (int i = 0; i < 40; i++) {
//		libraryStress.addPlaylist(list);
//	}
//	EXPECT_EQ(libraryStress.getPlaylists().size(), 44);
//}
//
//TEST(stressTesting, addSong_add100Playlists_104totalPlaylist) {
//	libraryStress = musicLibrary();
//	libraryStress.createTempPlaylist();
//	playlist list = playlist();
//	list.setName("new list");
//	for (int i = 0; i < 100; i++) {
//		libraryStress.addPlaylist(list);
//	}
//	EXPECT_EQ(libraryStress.getPlaylists().size(), 104);
//}
//
//TEST(stressTesting, addSong_add1000Playlists_1004totalPlaylist) {
//	libraryStress = musicLibrary();
//	libraryStress.createTempPlaylist();
//	playlist list = playlist();
//	list.setName("new list");
//	for (int i = 0; i < 1000; i++) {
//		libraryStress.addPlaylist(list);
//	}
//	EXPECT_EQ(libraryStress.getPlaylists().size(), 1004);
//}