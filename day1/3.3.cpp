#include <iostream>

int main()
{
    using namespace std;
    cout << 42 << endl;
    cout << 0x42 << endl;
    cout << 077 << endl;

    cout << "-----------" << endl;
    cout << hex << 42 << endl;
    cout << oct << 42 << endl;
    cout << dec << 42 << endl;
    cout << dec << 44 << endl;
}