#include <cmath>
#include <iostream>
#include <numbers>
#include <string>
using namespace std;
void print(int a);

void print(int a) {
    cout << a * a;
}

void print(double a);

void print(double a) {
    cout << pow(a, 1. / 2);  // 需要#include <cmath>
}
void print(const char* str);

void print(const char* str) {
    string strr = str;
    cout << strr.length();  // 需要#include <cstring>
}

template <typename T>
void swapValues(T& a, T& b) {
    T temp = b;
    b = a;
    a = temp;
}

template <typename T>
T add(T a, T b) {
    return a + b;
}
string add(const char* a, const char* b) {
    return string(a) + b;
}
void computeCircle(double r, double& area, double& circumference) {
    area = pi_d * r * r;
    circumference = 2 * pi_d * r;
}
void computeCircle(double r, double* area, double* circumference) {
    *area = pi_d * r * r;
    *circumference = 2 * pi_d * r;
}

void createArray(int*& arr, int size);
void createArray(int*& arr, int size) {
    arr = new int[size];
}
