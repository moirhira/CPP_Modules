#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



Intern::Intern() {}
Intern::Intern(const Intern& other) {(void)other;}
Intern& Intern::operator=(const Intern& other) {(void)other; return *this;}
Intern::~Intern() {}

static AForm* makeRobotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

static AForm* makePresidential(std::string target) {
    return new PresidentialPardonForm(target);
}

static AForm* makeShrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}


AForm* Intern::makeForm(const std::string &formName, const std::string &target) 
{

    std::string forms_availble[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    AForm* (*formsPtr[])(const std::string) = {&makeRobotomy, &makePresidential, &makeShrubbery};

    for (int i = 0; i < 3; i++)
    {
        if (forms_availble[i] == formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return formsPtr[i](target);
        }
    }
    std::cout << "Intern cannot create " << formName << " because it doesn't match any exist fomrs." << std::endl;
    throw std::exception();
}