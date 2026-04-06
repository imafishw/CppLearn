#include <iostream>
#include <string>


int main() {
    std::string s = "Hello, world!";
    std::string s2 = "Hello, zorld!";
    std::cout << (s > s2) << '\n';
    // int r = s.compare(s2); // 等价于 strcmp(s.c_str(), s2.c_str())
    // std::cout << "compare result: " << r << '\n';
    // std::cout << "==: " << (s == s2) << '\n';
    // std::cout << "<: " << (s < s2) << '\n';
    // std::cout << "in lexicographical order: "
    //           << (r < 0 ? "s < s2" : r > 0 ? "s > s2" : "equal") << '\n';

    return 0;
}