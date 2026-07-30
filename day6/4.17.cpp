#include <iostream>

int main()
{
    using namespace std;
    int nights = 1001;
    cout << "nights value = ";
    cout << nights << "; location " << &nights << endl;

    int* pt = new int;
    *pt = 1001;
    cout << "*pt = " << *pt;
    cout << "; location = " << pt << endl;

    double* p_double = new double;
    *p_double = 1002.113378;
    cout << "value of *pt_double = " << 
    *p_double << "; location = " << p_double;

    return 0;
}