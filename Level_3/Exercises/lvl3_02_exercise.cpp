// Create and empty list, ask the user to give 5 numbers, and print the max value
// For vs While

#include <iostream>
#include <vector>

using namespace std;

// declaring the function early to organize a bit
int max_value(vector<int> search_max);


int main()
{
    vector<int> numbers;
    for (int i = 0; i < 5; i++)
    {
        int number;
        cout << "Insert a number: ";
        cin >> number;
        numbers.push_back(number);
    }


    int max_number = max_value(numbers);

    cout << "The max value is: " << max_number << endl;

    return 0;
}


// receives a vector and returns the max value
int max_value(vector<int> search_max)
{
    int max = search_max[0];
    for (int i = 1; i < search_max.size(); i++)
    {
        if (search_max[i] > max)
        {
            max = search_max[i];
        }
    }
    return max;
}