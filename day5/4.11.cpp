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
    inflatable guest = 
    {
        "glorious gloria",
        1.88,
        29.99
    };
    inflatable pal = 
    {
        "audacious arthur",
        3.12,
        32.99
    };
    cout << "expand your guest list " << guest.name;
    cout << "and " << pal.name << endl;
    cout << "you can have both for $";
    cout << guest.price + pal.price << endl;

    return 0;
}