#include <iostream>
using namespace std;

int main() {
    char password[4];
    int secret = 12345;  // 在password旁边放一个变量
    
    cout << "secret = " << secret << endl;  // 先看看原始值
    cout << "请输入密码：";
    cin >> password;
    
    cout << "密码：" << password << &password << endl;
    cout << "secret = " << secret << &secret << endl;  // 看看被改了吗？
    return 0;
}