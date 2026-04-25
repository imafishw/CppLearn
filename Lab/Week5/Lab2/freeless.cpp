#include<stdio.h>
#include<stdlib.h>

// This example demonstrates free less.

int main(int argc, char* argv[]){
    int* ptr1 = (int*)malloc(sizeof(int)); // Allocate memory for an integer
    int* ptr2 = (int*)malloc(sizeof(int)); // Allocate memory for another integer

    *ptr1=0x12345678;
    *ptr2=*ptr1;

     printf("ptr1:%p\t data:0x%x\nptr2:%p\tdata:0x%x\n",ptr1,*ptr1,ptr2,*ptr2);
    // Free the allocated memory ptr1.
    free(ptr1);
    // 从测试结果free less而言并不会报错，且程序结束，操作系统会回收内存，所以不会有内存泄漏问题。
    return 0;
}