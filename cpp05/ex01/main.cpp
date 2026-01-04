#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {
    try
    {
        Bureaucrat bob("bob", 2);
        Form birthform("birth form", 1, 50);

        std::cout << birthform << std::endl;

        bob.signForm(birthform);

        bob.incrementGrade();

        bob.signForm(birthform);

        std::cout << birthform << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}