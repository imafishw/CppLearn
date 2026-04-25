#include <stdio.h>    //free more
#include <stdlib.h>
// 典型的double free错误，p1和p2指向同一块内存，
// 第一次free后内存已经被释放，再次free会导致未定义行为.
// 现代c库 会标记 已经被释放的内存，如果再次free会报错，或者程序崩溃。
int main(int argc, char*argv[]){
    int *p1 = (int*)malloc(sizeof(int)*1);
    *p1=0x12345678;
    int *p2 = p1;
    
    printf("p1:%p\tdata:0x%x\n\
           p2:%p\tdata:0x%x\n",p1,*p1,p2,*p2);
    free(p1);
    free(p2);
    return 0;
}