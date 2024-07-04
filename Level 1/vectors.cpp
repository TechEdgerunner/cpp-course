#include <iostream>
#include <vector>

int main() {
    std::vector<double> temperatures = {34.5, 27.5, 29.0, 32.0, 33.0};
    std::cout<<"Temperatures: "<< temperatures.at(1)<<"\n"; 
    return 0;
}