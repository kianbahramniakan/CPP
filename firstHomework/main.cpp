#include <iostream>

int main() {
    std::string name;
    std::cout << "Whats your name? ";
    std::getline(std::cin, name);

    int age = 0;
    std::cout<< "How old are you? ";
    std::cin>> age;

    int height = 0;
    std::cout<< "How tall are you? ";
    std::cin>> height;

    std::cout<<"Hello "<< name <<" your height is "<< height <<" and your age is "<< age <<std::endl;
    return 0;
}
