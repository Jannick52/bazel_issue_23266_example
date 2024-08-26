// hello world cpp
#include <iostream>
#include <string>

#include <unistd.h>

int main() {

    Config config;
    const char *keyexpr = "demo/example";

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::string value = "Hello, " + name + "!";

    std::cout << value << std::endl;

    return 0;
}