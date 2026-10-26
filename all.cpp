#include <iostream>
// Функция для простого возведения в степень
long long power_simple() {
    long long base, exp;
    std::cin >> base;
    std::cin >> exp;
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;  // умножаем base на себя exp раз
    }
    return result;
}
int main() {
    std::cout << "Результат: " << power_simple() << std::endl;
    return 0;
}