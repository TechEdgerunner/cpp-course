// Compute the max value inside a list of number (vector)
// Createt the function and pass the vector as a parameter

#include <iostream>
#include <vector>

using namespace std;

// declaring the function early to organize a bit
int max_value(vector<int> search_max);


int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

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