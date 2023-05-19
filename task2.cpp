#include <iostream>
#include <list>
#include <memory>

class MyInt {
private:
    int i{ 0 };

public:
    MyInt(int par = 0) : i(par) {}

    friend std::ostream& operator<<(std::ostream& out, const MyInt& p) {
        out << p.i << std::endl;
        return out;
    }
};

int main() {
    std::list<std::unique_ptr<MyInt>> m1;

    // Добавление элементов в список
    m1.push_back(std::make_unique<MyInt>(1));
    m1.push_back(std::make_unique<MyInt>(2));
    m1.push_back(std::make_unique<MyInt>(3));

    // Вывод значений списка
    for (const auto& ptr : m1) {
        std::cout << *ptr;
    }

    return 0;
}
