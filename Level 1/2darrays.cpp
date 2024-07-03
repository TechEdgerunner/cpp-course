#include <iostream>

int main() {

    // dimensoes da matriz
    const int linhas = 3;
    const int colunas = 4;

    // criação da array 2d
    int custom_array[linhas][colunas] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    std::cout<<"Elemento (1,1): "<<custom_array[0][0]<<"\n";
    std::cout<<"Elemento (1,2): "<<custom_array[0][1]<<"\n";
    
    return 0;
}