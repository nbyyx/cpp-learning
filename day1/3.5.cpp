#include <iostream>

int main()
{
    using namespace std;
    cout << "请输出一个字符:";
    char ch;
    cin >> ch;
    cout << "你输入的字符是：" << ch << endl;
    int a = int(ch);
    cout << "你输入的字符的ASCII码是：" << a << endl;
    char b = ch + 1;
    cout << b << endl;
    cout << char(b);
    return 0;
}