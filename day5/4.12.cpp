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
    inflatable awenzxs = 
    {
        "sunflower",
        0.20,
        12.49
    };
    cout << "awenzxs: " << awenzxs.name << " for $";
    cout << awenzxs.price << endl;
    inflatable choice ;
    choice = awenzxs;
    cout << choice.name << endl;
 

    return 0;
}