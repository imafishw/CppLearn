#include <iostream>
#include <cstring>
#include <string>
#include <locale>
#include <codecvt>
using namespace std;

int main()
{
    char rabbit[16] = {'P', 'e', 't', 'e', 'r'};
    cout << "String length is " << strlen(rabbit) << endl;
    for(int i = 0; i < 16; i++)
        cout << i << ":" << +rabbit[i] << "(" << rabbit[i] << ")" << endl;
    
        //刚好占满 无法停下来，导致后面输出垃圾值
    char bad_pig[9] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g'};
    char good_pig[10] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g', '\0'};
    cout << "Rabbit is (" << rabbit << ")" << endl;
    cout << "Pig's bad name is (" << bad_pig << ")" << endl; 
    cout << "Pig's good name is (" << good_pig << ")" << endl; 
    // '0' 是字符 0，ASCII 48
    // '\0' 是字符串结束符，ASCII 0 数值0 
    char name[10] = {'Y', 'u', '0', 'S', '.'};
    cout << "(" << name << ")" << endl;
    cout << strlen(name) << endl;
    return 0;
}