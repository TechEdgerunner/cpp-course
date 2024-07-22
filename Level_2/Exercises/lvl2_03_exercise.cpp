// create a vector of 4 float numbers. compute the average and print it
// use namespace and functions

#include <iostream>
#include <vector>

float getNumbers()
{
    float number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    return number;
}

int main()
{
    std::vector<float> numbers;

    for (int i = 0; i < 4; i++)
    {
        numbers.push_back(getNumbers());
    }
    
    float sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }

    std::cout << "The average is: " << sum / numbers.size() << std::endl;

    return 0;
}
