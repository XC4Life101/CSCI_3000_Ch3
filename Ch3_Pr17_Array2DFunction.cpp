#include <iostream>
using namespace std;

const int max_row = 2;
const int max_col = 3;

void read(int marks[][max_col], int max_row);
void print(int marks[][max_col], int max_row);

int main()
{
	int marks[max_row][max_col];

	read(marks, max_row);

	cout << endl;

	print(marks, max_row);

	return 0;
}

void read(int marks[][max_col], int max_row) {
	for (int row = 0; row < max_row; row++) {
		for (int col = 0; col < max_col; col++) {
			cout << "Enter value for marks[" << row << "][" << col << "]: ";
			cin >> marks[row][col];
		}
	}
}

void print(int marks[][max_col], int max_row) {
	for (int row = 0; row < max_row; row++) {
		for (int col = 0; col < max_col; col++) {
			cout << marks[row][col] << " ";
		}
		cout << endl;
	}
}