#include <iostream>
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

void printInt(const MyInt* p) {
    if (p)
        std::cout << *p << std::endl;
}

int main() {
    std::unique_ptr<MyInt> p = std::make_unique<MyInt>(3);
    printInt(p.get());

    return 0;
}
