// add elements from a list to another list (integers)
// pass vector by value, reference, const reference?

#include <iostream>
#include <vector>

using namespace std;

void add_elements_from_list_to_list(vector<int> &list1, const vector<int> &list2);

int main() 
{
    vector<int> list1 = {1, 2, 3, 4, 5};
    vector<int> list2 = {6, 7, 8, 9, 10};

    add_elements_from_list_to_list(list1, list2);

    for (int i = 0; i < list1.size(); i++)
    {
        cout << list1[i] << " ";
    }
    cout << endl;

    return 0;

}

// add elements from a list to another list (integers)
// pass vector by reference

void add_elements_from_list_to_list(vector<int> &list1, const vector<int> &list2)
{
    for (int i = 0; i < list2.size(); i++)
    {
        list1.push_back(list2[i]);
    }
}