#include <iostream>

// Функция через вычитание
int gcd_sub(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;  // вычитаем b из a
        } else {
            b = b - a;  // вычитаем a из b
        }
    }
    return a;
}
int main() {
    int a, b;
    std::cin >> a >> b;  // ввод: 9 12
    std::cout << gcd_sub(a, b) << std::endl;  // выведет 3
    return 0;
}