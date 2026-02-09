#include <iostream>
using namespace std;

const int max_row = 3;
const int max_col = 4;

void read(int attend[][max_col], int max_row);
void print(int attend[][max_col], int max_row);
void summary(int attend[][max_col], int max_row);
void worst(int attend[][max_col], int max_row);

int main()
{
	int attend[max_row][max_col];

	read(attend, max_row);
	print(attend, max_row);
	summary(attend, max_row);
	worst(attend, max_row);

	return 0;
}

void read(int attend[][max_col], int max_row) {
	cout << "Enter attendance (1 = Present, 0 = Absent)\n";

	for (int row = 0; row < max_row; row++) {
		cout << "Student " << (row + 1) << ":\n";
		for (int col = 0; col < max_col; col++) {
			cout << "  Day " << (col + 1) << ": ";
			cin >> attend[row][col];
		}
	}
}

void print(int attend[][max_col], int max_row) {
	cout << "\nAttendance Table:\n"
		<< "        Day1 Day2 Day3 Day4\n";
	for (int row = 0; row < max_row; row++) {
		cout << "Stu" << (row + 1) << "     ";
		for (int col = 0; col < max_col; col++) {
			cout << attend[row][col] << "    ";
		}
		cout << endl;
	}
}

void summary(int attend[][max_col], int max_row){

	cout << "\nStudent Summary:\n";
	for (int row = 0; row < max_row; row++) {
		int count = 0;
		cout << "Student " << (row + 1) << ": Present = ";
		for (int col = 0; col < max_col; col++) {
			if (attend[row][col] == 1) {
				count++;
			}
		}
		cout << count << ", Absent = " << (max_col - count) << endl;

		if (count <= 2) {
			cout << "WARNING: Student " << (row + 1) << " has " << (max_col - count) << " absences!\n";
		}
	}


}

void worst(int attend[][max_col], int max_row){
	int maxT = 0;
	int maxD = 0;

	for (int col = 0; col < max_col; col++) {
		int max = 0;
		for (int row = 0; row < max_row; row++) {
			if (attend[row][col] == 0) {
				max++;
			}
		}
		if (max > maxT) {
			maxT = max;
			maxD = (col + 1);
		}
	}

	cout << "\nWorst attendance day = Day " << maxD << " (" << maxT << " absences)\n";
}

