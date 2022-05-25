#include "io.h"
#include <iostream>


int main()
{
    int num1;
    int num2;

    std::cout << "Enter a number:" << '\n';
    num1 = readNumber();
    std::cout << "Enter another number:" << '\n';
    num2 = readNumber();

    int sumNums;
    sumNums = addNums(num1, num2);
    writeAnswer(sumNums);
    return 0;
}