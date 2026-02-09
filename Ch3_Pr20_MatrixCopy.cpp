#include <iostream>
using namespace std;

int main()
{
	const int rows = 2;
	const int cols = 3;
	int table_a[rows][cols];
    int table_b[rows][cols];

	cout << "Enter values for matrix A (2x3): \n";

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << "A[" << row << "][" << col << "]: ";
            cin >> table_a[row][col];
        }
    }

    cout << endl;
    cout << "Matrix B (copy of A): \n";

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            table_b[row][col] = table_a[row][col];
            cout << table_b[row][col] << "    ";
        }
        cout << endl;
    }

}
