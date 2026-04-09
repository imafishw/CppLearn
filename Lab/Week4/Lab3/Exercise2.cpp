/*
Q. It is asked to get the the number of 
characters in ‘dirction’(which should be 4) 
by using strlen without changing the size 
of the ‘dirction’ array, one option is to add 
a piece of code between the definitions on 
“dirction” and “title”:
*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int cards[4]{};
    int hands[4];
    // int price[] = {2.8,3.7,5,9,'C', "D"}; 
    // error: cannot convert ‘const char*’ to ‘int’ in initialization 
    // After C++ 11 不能这样转换小数 隐式窄化转换
    int price[] = {(int)2.8,(int)3.7,5,9,'C', 'D'}; 
    char direction[4] {'L',82,'U',68};
    char x = '\0';
    char title[] = "DeepSeek is an awesome tool.";   
    cout<< "sizeof(cards) = " << sizeof(cards) << ",sizeofof cards[0] = " << sizeof(cards[0]) << endl;
    cout<< "sizeof(price) = " << sizeof(price) << ",sizeofof price[0] = " << sizeof(price[0]) << endl;
    cout<< "sizeof(direction) = " << sizeof(direction) << ",length of direction = " << strlen(direction) << endl;
    cout<< "sizeof(title) = " << sizeof(title) << ",length of title = " << strlen(title) << endl;
    return 0;
}


