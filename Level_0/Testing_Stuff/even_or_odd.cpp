#include <iostream>


int main()
{
    int input_number;
    std::cout << "Enter a number: ";
    std::cin >> input_number;

    if (input_number % 2 == 0) {
        std::cout << input_number << " is even." << std::endl;
    } else {
        std::cout << input_number << " is odd." << std::endl;
    }

    return 0;
}