#include <cstdio>
#include "gtest/gtest.h"
#include <string>
#include <iostream>
#include "startApplication.h"
#include <thread>

using namespace std;

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);

	testing::InitGoogleTest(&argc, argv);
	string input;
	startApplication::startBlock();
	while (true) {

		cout << endl;
		cout << "Please enter an Input:" << endl;
		getline(cin, input);

		if (input == "1") {
			RUN_ALL_TESTS();
		}
		else if (input == "2") {
			startApplication::librarySelectionBlock();
		}
		else if (startApplication::checkNumber(input)) {
			int num = std::stoi(input);
			cout << "Integer Input Detected: " << input << endl;

		}
	}
}