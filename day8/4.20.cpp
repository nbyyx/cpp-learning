#include <iostream>

int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char* bird = "awen"; //加上const之后，不能修改指针本身，但是可以修改指针指向的值
    char* ps;
    ps = animal;
    cout << (int*)animal << endl;
    cout << animal << endl;
    cout << ps << " at " << (int*)ps;

    ps = new char[strlen(animal)+1];
    strcpy(ps, animal);
    cout << "ps = " << ps << endl;
    delete [] ps;

    return 0;

}