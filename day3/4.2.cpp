#include <iostream>

int main ()
{
    const int Size = 15;
    using namespace std;
    char name[Size], dessert[Size];
    // //空格、换行符、制表符等都算作分隔符，会将输入的字符串截断
    // cout << "请输入您的姓名：";
    // cin >> name;
    // cout << "请输入您的甜点：";
    // cin >> dessert;
    // cout << name << "的甜点是" << dessert << endl;
    
    // cin.getline(name, Size);
    // cin.getline(dessert, Size);
    // cout << name << "的甜点是" << dessert << endl;

    cout << "enter your name and dessert(换行输入): ";
    cin.getline(name, Size).getline(dessert, Size);
    cout << name << "的甜点是" << dessert << endl;
}