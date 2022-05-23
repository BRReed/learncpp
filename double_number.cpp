#include <iostream>


int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    int x;
    std::cout << "Enter a number:";
    std::cin >> x;
    std::cout << doubleNumber(x) << '\n';
    return 0;
}