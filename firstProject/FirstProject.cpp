#include <iostream>

int main() {
    int firstNumber = 0;
    int secondNumber = 0;

    std::cout<<"please enter first number: ";
    std::cin>> firstNumber;

    std::cout<<"please enter second number: ";
    std::cin>> secondNumber;

    int sum = firstNumber + secondNumber;
    int sub = firstNumber - secondNumber;
    int mul = firstNumber * secondNumber;
    int dev = firstNumber / secondNumber;

    std::cout<<"Sum : "<<sum <<std::endl <<"Sub : "<<sub <<std::endl <<"Mul : "<<mul <<std::endl <<"Dev : "<<dev <<std::endl;

//    std::cin.get()
    return 0;
}