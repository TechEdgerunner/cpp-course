#include <iostream>

int a = 5; // global variable

void function_void()
{
    int x = 5; // local variable
    std::cout << x << std::endl;
    std::cout << a << std::endl; // 5 global variable acessible

}


int main()
{

    int b = 10; // local variable
    {
        std::cout<< b << std::endl; // 10, variable acessible
    }

    function_void();

    return 0;
}