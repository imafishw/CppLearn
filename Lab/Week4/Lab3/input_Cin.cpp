#include <iostream>
using namespace std;
// cin.get 不会吃/n 需要自己处理
// cin.ignore() 可以吃掉残留的换行符
// cin.getline() 会吃掉换行符
int main() {
    char name[50];
    char city[50];

    cout << "Enter name: ";
    cin.get(name, 50);
    
    // 可以测试一下没换行的后果
    cin.ignore(); // ✅ 处理残留换行符！

    cout << "Enter city: ";
    cin.get(city, 50);

    cout << "Name: " << name << endl;
    cout << "City: " << city << endl;

    return 0;
}