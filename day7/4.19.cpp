#include <iostream>

int main()
{
    using namespace std;
    double wages[3] = {1000.0, 2000.0, 3000.0};
    short stacks[3] = {1, 2, 3};
    double* pw = wages;
    cout << "pw = " << pw << ", *pw = " << *pw << endl; 
    pw += 1;
    cout << "pw = " << pw << ", *pw = " << *pw << endl; 

    short* ps = stacks;
    cout << "ps = " << ps << ", *ps = " << *ps << endl; 
    ps += 1;
    cout << "ps = " << ps << ", *ps = " << *ps << endl; 

    cout << "stacks = " << stacks << " " << "&stacks[0] = " << &stacks[0] 
    << "&stacks = " << &stacks <<endl;//stack是第一个元素的首地址，&stack是该数组的首地址
    cout << "stack +1 = " << (stacks + 1) << " &stack + 1 = " << &stacks + 1;

    short (*pas)[3] = &stacks;

    cout << sizeof(wages) << endl;
    cout << sizeof(pw) << endl;
    cout << sizeof(stacks) <<endl;

    return 0;
}