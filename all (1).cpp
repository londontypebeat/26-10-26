#include <iostream>
#include <cmath>  // подключаем библиотеку для математических функций
long long power_builtin() {
    long long number, degree;
    std::cin >> number;
    std::cin >> degree;
    return pow(number, degree);  // используем готовую функцию
}
int main() {
    std::cout << "Результат: " << power_builtin() << std::endl;
    return 0;
}