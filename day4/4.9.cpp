#include <iostream>
#include <string>
#include <cstring> 

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string s1 = "panther";
    string s2;
    strcpy(charr1, charr2);
    cout << "charr1 is " << charr1 << endl;
    strcat(charr1, "juicy");
    cout << "charr1 is " << charr1 << endl;

    cout << "s1'length is " << s1.length() << endl;
    cout << "charr1'length is " << strlen(charr1) << endl;

}