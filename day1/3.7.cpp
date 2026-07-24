#include <iostream>

int main()
{
    using namespace std;
    cout << "请输入密码：____\b\b\b\b";
    char password[5];
    cin >> password;
    cout << "你输入的密码是：" << password << endl;
}