#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    cout << "9 / 5 = " << 9 / 5 << endl;
    cout << fixed << setprecision(5) << "9.0 / 5 = " << 9.0 / 5 << endl;
    cout << 5.0 << endl;
    cout << 3.3e10 / 13 << endl;
    cout << 3.3e10f / 13;

}