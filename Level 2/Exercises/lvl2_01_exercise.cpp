// ask for the name and age of a user and print the info
// use namespace and functions

#include <iostream>
using namespace std;


void askUserInfo()
{
    string user_name;
    int user_age;

    cout << "Enter your name: ";
    cin >> user_name;

    cout << "Enter your age: ";
    cin >> user_age;

    cout << "Your name is " << user_name << " and you are " << user_age << " years old." << endl;
}


int main()
{
    askUserInfo();
    return 0;
}
