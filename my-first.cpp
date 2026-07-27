#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    char charry[5];
    char charry2[5];
    cin.getline(charry, 5);
    cout << "you entered is " << charry << endl;
    cin.ignore(100, '\n');
    cin.getline(charry2, 5);
    cout << "you entered is " << charry2 << endl;

    return 0;
}