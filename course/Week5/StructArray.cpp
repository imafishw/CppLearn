#include <iostream>
#include <cstring>

using namespace std;

#define SIZE 30
typedef struct {
    char name[4];
    int born;
    bool male;
} Student ,*student;
// 数组名是一个常量地址，代表数组首元素的地址
// 数组名不是变量，不能被赋值（不能改指向）
// 除了两种特殊情况，数组名都等价于指向首元素的指针

// 一定要小心指针的使用。
int main() {
    Student class3[SIZE];
    student p = &class3[0];
    student p0 = &class3[1];
    student p1 = &class3[2];
    cout <<" p="<< p <<endl;
    cout <<" p0="<<p0<<endl;
    cout <<" p1="<<p1<<endl;


    return 0 ;
}