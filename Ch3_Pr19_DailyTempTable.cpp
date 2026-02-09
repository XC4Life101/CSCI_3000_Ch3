#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 4;
    int temp[rows][cols];

    cout << "Enter temperatures for 3 cities over 4 days: \n";

    for (int row = 0; row < rows; row++) {
        cout << "City " << (row + 1) << ": \n";
        for (int col = 0; col < cols; col++) {
            cout << "  Day " << (col + 1) << ": ";
            cin >> temp[row][col];
        }
    }

    cout << "\nTemperature Table:\n";

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << temp[row][col] << "    ";
        }
        cout << endl;
    }

    return 0;
}




