#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int maximum = (a > b) ? a : b;  // Используем условный оператор (тернарный оператор) для определения максимального числа.

    std::cout << maximum << std::endl;

    return 0;
}