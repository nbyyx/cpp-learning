#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 1.23456778;
    cout << a << endl;
    cout << scientific << a << endl;

    cout << fixed << setprecision(5) << a << endl;
    cout << scientific << a << endl;


    return 0;
}