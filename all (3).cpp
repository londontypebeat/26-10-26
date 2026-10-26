#include <iostream>

// Рекурсивная функция
void hanoi_recursive(int n, int from, int to, int help) {
    if (n == 1) {
        std::cout << "Ingredient 1 move from " << from << " to " << to << std::endl;
        return;
    }
    hanoi_recursive(n - 1, from, help, to);
    std::cout << "Ingredient " << n << " move from " << from << " to " << to << std::endl;
    hanoi_recursive(n - 1, help, to, from);
}
int main() {
    int n;
    std::cin >> n;  // ввод: 2
    hanoi_recursive(n, 1, 3, 2);
    return 0;
}
