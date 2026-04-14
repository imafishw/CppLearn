#include <iostream>
#include <cstring>

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
    p->name[sizeof(p->name) - 1] = '\0'; // Ensure null termination
    std::cout << p->name << " was born in " << p->born << std::endl;
    std::cout << "-----------------" << std::endl;
    strncpy(p->name, "Johan", sizeof(p->name) - 1);
    (*p).born = 2001;
    p->male = false;
    std::cout << p->name << " was born in " << p->born << std::endl;
    return 0;
}
