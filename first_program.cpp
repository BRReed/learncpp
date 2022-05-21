#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x { };

    std::cin >> x;
    int y = {x * 2};

    std::cout << "Double that number is: " << y << '\n';
    int z = {x * 3};

    std::cout << "Triple that number is: " << z;
    return 0;
}