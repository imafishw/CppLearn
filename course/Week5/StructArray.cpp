#include <iostream>
#include <cstring>

using namespace std;

#define SIZE 30
typedef struct {
    char name[4];
    int born;
    bool male;
} Student ,*student;

int main() {
    Student class3[SIZE];
    student p = &class3[0];
    student p0 = &class3[1];
    student p1 = &class3[2];
    cout <<" p="<< p <<endl;
    cout <<" p0="<<p0<<endl;
    cout <<" p1="<<p1<<endl;


    return 0 ;
}