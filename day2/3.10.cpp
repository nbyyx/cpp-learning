#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    float hats, heads;
    cout << "Enter the number of hats and heads: ";
    cin >> hats >> heads;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(8);

    cout << "The number of hats is " << hats << endl;
    cout << "The number of heads is " << heads << endl; 

    cout << defaultfloat;
    cout << "The number of heads is " << heads << endl; 
    return 0;
}