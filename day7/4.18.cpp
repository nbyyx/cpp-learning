#include <iostream>

int main()
{
    using namespace std;
    double* psome = new double [3];
    psome[0] = 1.33;
    psome[1] = 3.42;
    psome[2] = 4.23;
    for(int i = 0; i < 3; i++)
    {
        cout << "psome[" << i << "] = " << psome[i] << endl; 
    }
    cout << "psome = " << psome << endl; 
    psome += 1;
    cout << psome[0];
    psome -= 1;
    delete[] psome;
}