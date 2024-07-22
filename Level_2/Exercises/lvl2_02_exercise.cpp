// ask the user for 2 integer numbers, add them, and print them
// use namespace and functions

#include <iostream>
using namespace std;

int askUserNumber(int user_number)
{
    cout << "Enter a number: ";
    cin >> user_number;
    return user_number;
}

int main()
{
    int number1, number2;
    number1 = askUserNumber(number1);
    number2 = askUserNumber(number2);
    
    cout<< "the sum of the two numbers is: "<< number1 + number2 << endl;
    return 0;
}
