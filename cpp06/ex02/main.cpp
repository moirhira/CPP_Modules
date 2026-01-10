#include "Base.hpp"

int main() {
    std::srand(std::time(0));
    Base* p = generate();

    std::cout << "Pointer identification.\n";
    identify(p);

    std::cout << "Reference identification.\n";
    identify(*p);
    delete p;
    return 0;
}