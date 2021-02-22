#include <cstdio>
#include "gtest/gtest.h"
#include <string>
#include <iostream>
#include "startApplication.h"
#include <thread>

using namespace std;

struct user {
	public:
		string userName;
};

int main(int argc, char** argv) {
	user account = user();
	musicLibrary library = musicLibrary();
	library.createTempSongs();
	library.createTempPlaylist();

	testing::InitGoogleTest(&argc, argv);
	string input;
	startApplication::startBlock();
	cout << "Enter your name: ";
	getline(cin, input);
	account.userName = input;
	
	startApplication::homeBlock(account.userName);
	while (true) {

		cout << endl;
		cout << "Please enter an Input:" << endl;

		getline(cin, input);

		if (input == "1") {
			RUN_ALL_TESTS();
		}
		else if (input == "2") {
			while (true) {
				startApplication::selectionSection(account.userName, ref(library));
			}
		}
		else {
			cout << "Invalid Input " << input << endl;
		}
	}
}