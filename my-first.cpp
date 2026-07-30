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
    enum spectrum {red, blue};

    int a = red;
    spectrum yellow = spectrum(red + blue);
    cout << a;
    cout << yellow;

    return 0;
}