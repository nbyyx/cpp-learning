#include <iostream>

int main ()
{
    using namespace std;
    int a = 6;
    cout << "a = " << a << " address = " << &a << endl;
    int* p = &a;
    *p = 7;
    cout << a;
}