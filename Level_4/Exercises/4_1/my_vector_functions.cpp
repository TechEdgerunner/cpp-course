#include "my_vector_functions.hpp"

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
