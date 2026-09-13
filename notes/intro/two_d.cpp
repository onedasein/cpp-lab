#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cin >> rows >> cols;
    int **pp = new int*[rows] {};

    for (int i = 0; i < rows; i++) {
        pp[i] = new int[cols] {};
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            pp[i][j] = i * j;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j != 0) cout << ' ';
            cout << pp[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] pp[i];
    }
    delete[] pp;

    return 0;
}
