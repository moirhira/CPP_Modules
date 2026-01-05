#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>


RobotomyRequestForm::RobotomyRequestForm() 
    :AForm("RobotomyRequestForm", 72, 45), _target("none"){}


RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    :AForm("RobotomyRequestForm", 72, 45), _target(target){
}



RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) 
    : AForm(other), _target(other._target) {}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if (this != &other)
    {
        this->_target = other._target;
    }
    return *this;
}


RobotomyRequestForm::~RobotomyRequestForm() {}


void  RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    int randomNbr = std::rand() % 101;
    if (randomNbr <= 50)
        std::cout << _target << " robotomized\n";
    else
        std::cout << "robotomy failed.\n";

}