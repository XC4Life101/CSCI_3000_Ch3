#include <iostream>
using namespace std;

int main()
{
	const int studs = 3;
	const int subjs = 4;
	int marks[studs][subjs];

	cout << "Enter marks for 3 students and 4 subjects:\n";
	for (int row = 0; row < studs; row++) {
		cout << "Student " << (row + 1) << ":\n";
		for (int col = 0; col < subjs; col++) {
			cout << "  Subject " << (col + 1) << ": ";
			cin >> marks[row][col];
		}
	}

	cout << "\nHighest mark for each student:\n";
	for (int row = 0; row < studs; row++) {
		int max = 0;
		cout << "  Student " << (row + 1) << " highest = ";
		for (int col = 0; col < subjs; col++) {
			if (max < marks[row][col]) {
				max = marks[row][col];
			}
		}
		cout << max << "\n";
	}

}
