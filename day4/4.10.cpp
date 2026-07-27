#include <iostream>
#include <string>

int main()
{
    using namespace std;
    char charr[20];
    string str;
    cout << "length of string in charry before input: " << strlen(charr) << endl;
    cout << "length of string in string before input: " << str.length() << endl;
    cout << "enter a line of text: ";
    cin.getline(charr, 20);
    cout << "you entered is " << charr << endl;
    cout << "enter a line of text: ";
    getline(cin, str);
    cout << "you entered is " << str << endl;

    cout << "length of string in charry after input: " << strlen(charr) << endl;
    cout << "length of string in string after input: " << str.length() << endl;

    return 0;
}