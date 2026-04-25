#include<iostream>
using namespace std;
// 要做笔记复习
int main()
{
    int matrix[][4] = {1,3,5,7,9,11,13,15,17,19};
    // 对二维数组指针的准确表达
    int (*ptr2)[4] = matrix ;
    // 明白此时指针是几维的 想要缩小跳跃范围用 *符号来解引用
    cout <<"*ptr2 = "<<*(*(ptr2+1)+1)<< endl;
    ptr2++;
    // 二维指针转一维
    int *ptr = *matrix;
    // int *ptr = (int*)matrix; // 等价
    cout <<"*ptr = "<<*++ptr << endl; 
    int *p= *(matrix+ 1);
    cout <<"*p = "<<*p << endl;
    p+= 3;
    cout <<"*p++ = "<<*++p << endl; 
    const char *str = "Welcome to programming.";
    // 地址是一个东西不同的地址表达方法 决定操作地址的方式 例如跳动的范围 和解引用的方式.
    long *q = (long*)str;
    q++;
    char*r = (char*)q;
    cout << r <<endl;
    // 小端存储
    unsigned int num = 0x3E56AF67;
     cout <<"&num = "<<&num << endl;
     // 拆分到字节 留下两个 十六进制位
    unsigned short *pshort = (unsigned short*) &num;
    cout <<"pshort = "<<pshort << endl;
    cout<<"*pshort= 0x"<<hex<<*pshort<<endl;
    // 地址是所有指针的共性 这里移动两位 就是移动了一个unsigned short的大小
    // 数据是不会变化的 只是指针表示的范围有变化     
    cout<<"*(pshort+1)= 0x"<<hex<<*(pshort+1)<<endl;
    return 0;
}
