#include <cstdio>
//#include "gtest/gtest.h"
#include <string>
#include <iostream>
#include "startApplication.h"
#include "startApplicationS.h"
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

	//testing::InitGoogleTest(&argc, argv);
	string input, language;
	cout << "Press 1 for English" << endl;
	cout << "Presione 2 para español" << endl;
	getline(cin, language);
	if (language == "1") {
		startApplication::startBlock();
		cout << "Enter your name: ";
		getline(cin, input);
		account.userName = input;

		startApplication::homeBlock(account.userName);
		while (true) {

			cout << endl;
			cout << "Please, enter an Input:" << endl;

			getline(cin, input);

			if (input == "1") {
				//RUN_ALL_TESTS();
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
		else if(language == "2") {
			startApplicationS::startBlockS();
			cout << "introduzca su nombre: ";
			getline(cin, input);
			account.userName = input;

			startApplicationS::homeBlockS(account.userName);
			while (true) {

				cout << endl;
				cout << "Por favor, ingrese una entrada:" << endl;

				getline(cin, input);

				if (input == "1") {
					//RUN_ALL_TESTS();
				}
				else if (input == "2") {
					while (true) {
						startApplicationS::selectionSectionS(account.userName, ref(library));
					}
				}
				else {
					cout << "entrada inválida " << input << endl;
				}
			}
		}
}