#include <iostream>
#include <string>

int main ()
{
    using namespace std;
    string str1, str2;
    cout << "enter two animals: ";
    cin >> str1 >> str2;
    cout << "the two animals are " << str1 << " and " << str2 << endl;
    cout << "the first animal's third letter is " << str1[2] << endl;
    str1 = "cat";
    cout << "the first animal is now " << str1 << endl;
}