// Create a vector of 4 float numbers, compute the average an print it
// For the sum of the list you can use the function accumulate(list.begin(), list.end(), 0.0) from the STD library
// you will need to #include <numeric> to use it


#include <iostream>
#include <numeric>
#include <vector>

int main(){ 
    std::vector<float> numeros = {1.3, 7.3, 1.3, 4.3};
    std::accumulate(numeros.begin(), numeros.end(), 0.0);

    std::cout << "The average of those numbers is: "<< std::accumulate(numeros.begin(), numeros.end(), 0.0)/numeros.size() << std::endl;
    
    return 0;
}