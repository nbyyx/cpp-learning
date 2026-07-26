#include <iostream>

int main()
{
    using namespace std;
    int a = 9.99 + 11.45;
    cout << a << endl;

    int b = int(9.99) + int(11.45);
    cout << b << endl;

    cout << static_cast<int>(9.99) << endl;


    return 0;
}