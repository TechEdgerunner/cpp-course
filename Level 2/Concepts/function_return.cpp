#include <iostream>

void greet_user(std::string user_name, int user_age)
{
    std::cout<<"Hello "<< user_name; 
    std::cout<<", you are "<< user_age << " years old" << std::endl;
}

int triple_number(int number)
{
    return number * 3; // this is the return statement
}




void print_triple_number(int number)
{
    std::cout << triple_number(number) << std::endl;
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

    int result = triple_number(5);

    std::cout << "5 tripled is: " << result << std::endl;

    print_triple_number(4);

    return 0;
}