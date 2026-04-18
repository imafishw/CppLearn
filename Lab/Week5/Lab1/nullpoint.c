#include<stdio.h>   //wild_pointer.c
#include<stdlib.h>
// 直接崩溃
int main(int argc, char* argv[]){
    int *p1=NULL;
    // printf("address: %p\tdata: 0x%x\n",p1,*p1);
    printf("address: %p\t", p1);
    return 0;
}