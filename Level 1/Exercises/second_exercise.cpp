// Ask the user for 2 integer numbers, add them, and print them


#include <iostream>


int main(){

    int first_number;
    int second_number;

    std::cout << "Enter the first number: ";
    std::cin >> first_number;


    std::cout << "Enter the second number: ";
    std::cin >> second_number;


    std::cout << "The sum of those numbers is: "<< first_number + second_number << std::endl;


    return 0;
}
