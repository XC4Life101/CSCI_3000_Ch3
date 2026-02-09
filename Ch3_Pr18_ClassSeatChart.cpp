#include <iostream>
using namespace std;

int main()
{
	const int rows = 3;
	const int cols = 4;
	int seats[rows][cols];

	cout << "Enter roll numbers for a 3x4 seating chart:\n";

	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++) {
			cout << "Seat [" << row << "][" << col << "]: ";
			cin >> seats[row][col];
		}
	}

	cout << "\nSeating Chart:\n";
	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++) {
			cout << seats[row][col] << "\t";
		}
		cout << endl;
	}

	return 0;
}
