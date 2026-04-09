#include <stdio.h>  //p2.c
union data{
int n;
char ch;
short m;
};
int main()
{
union data a;
printf("%d, %d\n", sizeof(a), sizeof(union data) );
// 共用最大变量的内存 int n占4字节.
a.n= 0x40;
// 十六进制 对于10进制 64
printf("%X, %c, %hX\n", a.n, a.ch, a.m);
//小端来说 0x40 00 00 00
a.ch = '9';
printf("%X, %c, %hX\n", a.n, a.ch, a.m);
a.m= 0x2059;
// 小端来说 0x59 20 00 00
printf("%X, %c, %hX\n", a.n, a.ch, a.m);
a.n= 0x3E25AD54;
// 小端来说 0x54 AD 25 3E
// 0x54 = 84 = 'T' 0xAD = 173 0x25 = 37 0x3E = 62
printf("%X, %c, %hX\n", a.n, a.ch, a.m);
return 0;
}