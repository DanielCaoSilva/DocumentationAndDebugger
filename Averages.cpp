// Calculate the average test score
//#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string score;
	ifstream scoresStream("test-scores.txt");
	auto counter = 0;
	auto totalScores = 0.0;

	if (scoresStream.is_open()) {
		while (getline(scoresStream, score)) {
			cout << "Test " << ++counter << " = " << score << '\n';
			// convert the string to double
			// add the current score to the sum
			totalScores += std::stod(score);
		}
		scoresStream.close();
		cout << "Read " << counter << " scores" << endl;
		// calculate the average and display
		cout << "Average score = " << (totalScores / counter) << endl;
		scoresStream.close();
	}
	else {
		cout << "Unable to open file";
	}

	return 0;
}