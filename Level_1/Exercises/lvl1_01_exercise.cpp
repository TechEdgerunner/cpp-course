// Ask for the name and age of an user, and print the info.

#include <iostream>
#include <string>

int main()
{
    std::string username;
    int userage;

    std::cout << "Enter your name: ";
    std::cin >> username;


    std::cout << "Enter your age: ";
    std::cin >> userage;   

    std::cout << "Your name is " << username << " and you are " << userage << " years old." << std::endl;


    return 0;
}