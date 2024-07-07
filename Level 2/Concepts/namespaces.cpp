#include <iostream>

namespace abc
{
    int triple_number(int number)
    {
        return number * 3;
    }
};

int main()
{
 
    // triple_number(5); // error: 'triple_number' was not declared in this scope
 
    abc::triple_number(5); // now it works    
 
    return 0;
}