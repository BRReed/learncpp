#include <iostream>
#include <limits>

int main()
{
    std::cout << "Hello, World!";
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any character limits in input buffer until enter
    std::cin.get(); // get one more char from the user
    return 0;
}