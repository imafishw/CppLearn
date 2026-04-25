#include <iostream>
#include <stdlib.h>

using namespace std;

// 按字节交换我们想到一个方法就是用一个unsigned char 类型的指针来访问numA的地址

int main(int argc, char *argv[]){
    int numA= 0x11223344;
    // 判断大小端
    unsigned char *ptrnumA = (unsigned char*) &numA; // 定义指向字节的指针
    // 取字节指向的第一个值是否是0x44 来判断是小端还是大端
    cout<<"Data_A Address: "<<&numA<<" Value: 0x"<<hex<<*ptrnumA \
    << ", This is " <<(*ptrnumA == 0x44 ? "Little Endian" : "Big Endian") << endl;

    if(argc == 2){
        if(argv[1][0]=='H'){
            int *pnumB = (int*)malloc(sizeof(int));
            if(pnumB!=NULL){
                unsigned short *pshort = (unsigned short*) &numA;
                unsigned short *pnumB_short = (unsigned short*) pnumB;
                /*complete code here*/
                } 
            }
    else if(argv[1][0]=='S'){
            /*complete code here*/

        }   
    }
    return 0;
}
