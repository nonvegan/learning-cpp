#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() 
{
	srand(time(NULL));
	int option;
	do {
		cout << "What would you like to do?\n1. Play Guessing Game\n9. Quit\n";
		while (!(cin >> option)) {
			cout << "Please enter numbers only." << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if (option == 1) {
			int number = rand() % 100 + 1;
			cout << number << '\n';
			int guess = 0;
			vector<int> guesses;
			int nTries = 0;
			ofstream fileOutput("result.txt", ios::app);
			cout << "Guess the number . . .\n";
			do {
				while (!(cin >> guess)) {
					cout << "Please enter numbers only." << endl;
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				guesses.push_back(guess);
				nTries++;
				if (number > guess) {
					cout << "Try higher . . .\n";
				}
				else if (number < guess) {
					cout << "Try lower . . .\n";
				}
			} while (number != guess);
			string outsputString = "You guessed the correct number after " + to_string(nTries) + " tries. Your guesses were: ";
			for (int guess : guesses) {
				outsputString += to_string(guess) + ", ";
			}
			outsputString.pop_back();
			outsputString.pop_back();
			outsputString.push_back('\n');
			cout << outsputString;
			fileOutput << outsputString;
			fileOutput.close();
		}
	} while (option != 9);
}















