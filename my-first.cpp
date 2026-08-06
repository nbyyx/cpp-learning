#include <iostream>
#include <string>
using namespace std;


struct stu
{
    string name;
    int num;
};

int main()
{
    stu s1 = {"yyx", 12};
    stu s2 = {"wlg", 13};
    stu s3 = {"sss", 14};
    stu* p[3] = {&s1, &s2, &s3};
    stu** pp = p;
    cout << (*pp)->name; 
    cout << endl;
    cout << pp[1]->name << endl;
    cout << p[0]->name << endl;
    

    return 0;
}