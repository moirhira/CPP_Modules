#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main() {
    Intern someRandomIntern;
    AForm* rrf = NULL;

    try {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;
        
        delete rrf; 
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---------------------------------" << std::endl;

    try {
        rrf = someRandomIntern.makeForm("coffee request", "Boss");
        if (rrf)
            delete rrf;
    }
    catch (std::exception &e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}