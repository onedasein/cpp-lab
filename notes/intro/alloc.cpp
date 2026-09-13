#include <iostream>
using namespace std;

int main() {
    int n, sum {0};
    double avrg {0};
    cin >> n;
    double *arr = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    avrg = (double)sum / n;
    cout << avrg;
    delete[] arr;
    return 0;
}
