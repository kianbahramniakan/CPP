#include <iostream>
#include <string>

int main() {
    std::cout<<"Hello, Whats your name? ";
    std::string name;
    std::getline(std::cin, name);
    std::cout<<"hello "+name;
    return 0;
}