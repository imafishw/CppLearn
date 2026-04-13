#include <iostream>

typedef struct {
    char name[4];
    int born;
    bool male;
} Student;


int main() {
    Student lzh = {
        "lzh",
        2000,
        true
    };
    Student* p = &lzh;
    std::cout << p->name << " was born in " << p->born << std::endl;
    return 0;
}
