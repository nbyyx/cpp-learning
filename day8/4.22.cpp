#include <iostream>
using namespace std;

char* getname()
{
    char temp[80];
    cout << "enter your name:";
    cin.getline(temp, 80);
    return temp;
}

int main()
{
    char* name;
    name = getname();
    cout << name <<" at " << (int*)name << endl;
    

    return 0;
}