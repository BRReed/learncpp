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