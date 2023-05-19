#include <iostream>
#include <memory>

int main() {
    constexpr int size = 5;
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(size);

    // Инициализация элементов массива
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    // Вывод элементов массива
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
