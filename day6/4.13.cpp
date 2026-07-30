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
    inflatable guests[2] = 
    {
        {"bambi", 0.5, 21.99},
        {"Godzilia", 2000, 565.99}
    };
    cout << guests[0].name << " " << guests[1].name << endl;

    return 0;
}