#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable* p = new inflatable;
    cout << "enter name of inflatable:" << endl;
    cin.getline(p->name,20); 
    cout << (*p).name;
    delete p;
 

    return 0;
}