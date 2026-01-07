#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>


PresidentialPardonForm::PresidentialPardonForm() 
    : AForm("PresidentialPardonForm", 25, 5), _target("none"){}


PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    :AForm("PresidentialPardonForm", 25, 5), _target(target){}



PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) 
    :AForm(other),  _target(other._target) {}


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    if (this != &other)
    {
        this->_target = other._target;
    }
    return *this;
}


PresidentialPardonForm::~PresidentialPardonForm() {}


void  PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}