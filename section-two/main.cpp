#include <iostream>

int readNumber();
int addNums(int n1, int n2);
void writeAnswer(int tot_sum);

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