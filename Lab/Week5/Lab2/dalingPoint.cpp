#include<iostream>

using namespace std;

int main(int argc, char *argv[]){
    int *ptr = new int(1);
    *ptr = 1;
    cout << "Value: " << *ptr << " Address: " <<\ 
    ptr << endl;
    delete ptr;
    // *ptr = 0x654321;
    cout << "Value: " << *ptr << " Address: " <<\ 
    ptr << endl;

    return 0; 
}

