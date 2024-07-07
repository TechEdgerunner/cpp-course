#include <iostream>

void greet_user(std::string user_name, int user_age)
{
    std::cout<<"Hello "<< user_name; 
    std::cout<<", you are "<< user_age << " years old" << std::endl;
}


int main()
{
    std::string user_name;
    int user_age;

    std::cout << "Enter your name: ";
    std::cin >> user_name;
    
    std::cout << "Enter your age: ";
    std::cin >> user_age;

    greet_user(user_name, user_age);
    return 0;
}