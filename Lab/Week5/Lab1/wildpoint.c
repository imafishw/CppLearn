#include<stdio.h>   //wild_pointer.c
#include<stdlib.h>

// p1是一个野指针，指向一个随机的内存地址，可能会导致程序崩溃或产生不可预测的行为。
// 存在程序不崩溃的可能. 


int main(int argc, char* argv[]){
   int*p1;
   *p1=0x12345678;
   printf("address: %p\tdata: 0x%x\n",p1,*p1);
   return 0;
}