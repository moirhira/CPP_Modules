#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Unamed"),  _grade(150){ }


Bureaucrat::Bureaucrat(std::string const &name, int  grade) : _name(name){

    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
    
}


Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name) , _grade(other._grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other)
    {
        this->_grade = other._grade;
    }
    return *this;
}


Bureaucrat::~Bureaucrat() {}


std::string Bureaucrat::getName() const{
    return _name;
}


int Bureaucrat::getGrade() const{
    return _grade;
}


void Bureaucrat::incrementGrade() {
    if ((_grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException();
    
    this->_grade--;
}


void Bureaucrat::decrementGrade() {
    
    if ((_grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}


void Bureaucrat::signForm(AForm & form) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " couldn't sign " << form.getName() 
                  << " because " << e.what() << std::endl;
    }
}


void Bureaucrat::executeForm(AForm const & form) const {
    try 
    {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " couldn't execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
    
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}


std::ostream& operator<<(std::ostream &out, const Bureaucrat& obj) {
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return out;
}