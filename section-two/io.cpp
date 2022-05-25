#include "io.h"
#include <iostream>

int addNums(int n1, int n2)
{
    int sum;
    sum = n1 + n2;
    return sum;
}

int readNumber()
{
    int num;
    std::cin >> num;
    return num;
}

void writeAnswer(int tot_sum)
{
    std::cout << "Your numbers add up to: " << tot_sum;
}