#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm() 
:AForm("ShrubberyCreationForm", 145, 137),  _target("none"){}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
:AForm("ShrubberyCreationForm", 145, 137), _target(target){

}



ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) 
    :AForm(other),  _target(other._target) {}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this != &other)
    {
        this->_target = other._target;
    }
    return *this;
}


const char * ShrubberyCreationForm::FileCannotBeOpenException::what() const throw() {
    return "File cannot be open!";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


void  ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();

    std::ofstream file((_target + "_shrubbery").c_str());
    if (!file.is_open())
    {
        throw FileCannotBeOpenException();
    }
    file << "🌲🌲🌲"  << std::endl;
}