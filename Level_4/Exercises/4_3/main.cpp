// find how many ocurrecens of a string in a list

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    vector<string> list = {"potato", "banana", "apple", "orange", "potato", "kiwi", "apple", "potato", "ananas"};
    
    string word = "potato";

    int word_count = 0;

    for(int i = 0; i < list.size(); i++)
    {
        if(list[i] == word)
        {
            word_count++;
        }
    }
    
    cout << "The word " << word << " appears " << word_count << " times in the list." << endl;

    return 0;
}