#include "Base.hpp"

Base::~Base(){}

Base *generate(void) {
    int randNbr = std::rand() % 3;
    if (randNbr == 0)
        return  new A;
    else if (randNbr == 1)
        return new B;
    else
        return new C;
}


void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}


void identify(Base& p) {
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch (std::exception & e){}

    try
    {
        dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch (std::exception & e){}

    try
    {
        dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch (std::exception & e){}
}

