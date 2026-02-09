#include <iostream>
using namespace std;

const int rows = 3;
const int cols = 4;

void read(int sales[][cols], int rows);
void print(int sales[][cols], int rows);

int main()
{
	int sales[rows][cols];

	read(sales, rows);
	print(sales, rows);

	return 0;
}

void read(int sales[][cols], int rows) {

	for (int row = 0; row < rows; row++) {
		cout << "Cashier " << (row + 1) << ":\n";
		for (int col = 0; col < cols; col++) {
			cout << "  Day " << (col + 1) << ": ";
			cin >> sales[row][col];
		}
	}
	cout << endl;
}

void print(int sales[][cols], int rows) {
	int best = 0;
	int bestC = 0;

	for (int row = 0; row < rows; row++) {
		int total = 0;
		cout << "Cashier " << (row + 1) << " total sales: ";
		for (int col = 0; col < cols; col++) {
			total += sales[row][col];

		}
		cout << total << "\n";
		if (total > best) {
			best = total;
			bestC = (row + 1);
		}
	}

	cout << endl;

	for (int row = 0; row < rows; row++) {
		int max = 0;
		int day = 0;
		cout << "Cashier " << (row + 1) << " best day: ";
		for (int col = 0; col < cols; col++) {
			if (max < sales[row][col]) {
				max = sales[row][col];
				day = (col + 1);
			}
		}
		cout << "Day " << day << "(" << max << ")\n";
	}

	cout << "\nBest Cashier = Cashier " << bestC << " (total = " << best << ")";
}
