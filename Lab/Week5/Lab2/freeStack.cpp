#include<iostream>

using namespace std;
// free Stack
int main(int args,char *argv[]){
    int *ptr = nullptr ;
    int d1 = 0x12345678;
    ptr = &d1;
    cout<<"ptr:"<<ptr<<"\tdata:0x"<<hex<<*ptr<<endl;
    free(ptr); 
    return 0;
}