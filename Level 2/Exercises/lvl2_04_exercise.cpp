// celsius to fahrenheit
// f = c * 1.8 + 32
// use namespace and functions


#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsius)
{
    return celsius * 1.8 + 32;
}

int main()
{
    double user_celsius;
    cout << "Enter a temperature in Celsius: ";
    cin >> user_celsius;
    
    cout << "The temperature in Fahrenheit is: " << celsiusToFahrenheit(user_celsius) << endl;
    
    return 0;
}
