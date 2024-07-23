#include "my_vector_functions.hpp"


#include <iostream>
#include <vector>

using namespace std;


// ao adicionar a referencia & no inicio do parametro, estamos passando a referencia do objeto, e nao uma copia do objeto
// logo, ao adicionar elementos no vetor, estamos adicionando no vetor original


void add_zeros_to_list(vector<int> &number_list, int zeros_number)
{
    for (int i = 0; i < zeros_number; i++)
    {
        number_list.push_back(0);
    }

    cout << "C. Size of number list: " << number_list.size() << endl;
}

// ao adicionar const na frente do parametro, estamos garantindo que a funcao nao ira modificar o objeto
// ou seja, a funcao nao pode adicionar elementos no vetor

void print_all_elements_from_list(const vector<int> &list)
{

// ao usar " : " percorremos todos os elementos do vetor

    for (int number: list)
    {
        cout << number <<  endl;
    }
}



int main()
{
    vector<int> list = {5, 5 ,4};
    cout << "A. Size of number list: " << list.size() << endl;
    add_zeros_to_list(list, 4);
    cout << "B. Size of number list: " << list.size() << endl;
    return 0;
}