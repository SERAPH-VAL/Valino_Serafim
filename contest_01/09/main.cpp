#include <iostream>
#include <cmath>

int main() {
    double a, b;
    std::cin >> a >> b;
    
    double hypotenuse = std::sqrt(a*a + b*b);
    
    std::cout << hypotenuse << std::endl;
    
    return 0;
}