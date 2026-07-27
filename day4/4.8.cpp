#include <iostream>
#include <string>

int main ()
{
    using namespace std;
    string s1 = "penguin";
    string s2, s3;

    cout << "you can assign one string pbject to another: s2 = s1\n";
    s2 = s1;
    cout << "s1 is " << s1 << "; s2 is " << s2 << endl;

    cout << "you can assign a c-style string to a string object: s3 = \"penguin\"" <<endl;
    s3 = "penguin";
    cout << "s3 is " << s3 << endl;

    cout << "you can concatenate strings: s1 + s2 =" << s1 + s2 << endl;
    cout << s1 + " and " + s2 << endl;

    cout << "you can append string: s1 += s2";
    s1 += s2;
    cout << "s1 is " << s1 << endl;

    return 0;
}