#include <iostream>

int main()
{
    using namespace std;
    cout << "how old are you? ";
    int age;
    cin >> age;
    cin.get(); //或者（cin >> age).get();
    char address[80];
    cout << "enter your address: ";
    cin.getline(address, 80);
    cout << "you are " << age << " years old and live at " << address << endl;
}