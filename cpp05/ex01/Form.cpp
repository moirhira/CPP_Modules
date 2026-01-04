#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _is_signed(false), _gradeReqToSign(150) ,_gradeReqToExec(150){}



Form::Form(const std::string name, int req_sign , int req_exec) 
: _name(name), _is_signed(false), _gradeReqToSign(req_sign) , _gradeReqToExec(req_exec) 
{
    if (req_sign < 1 || req_exec < 1)
        throw GradeTooHighException();
    if (req_sign > 150 || req_exec > 150)
        throw GradeTooLowException();
}


Form::Form(const Form &other) 
    : _name(other._name), _is_signed(other._is_signed),
     _gradeReqToSign(other._gradeReqToSign), _gradeReqToExec(other._gradeReqToExec)
{}



Form& Form::operator=(const Form &other) {
    if (this != &other)
    {
        this->_is_signed = other._is_signed;
    }
    return *this;
}


Form::~Form() {}



std::string Form::getName() const {
    return _name;
}


bool Form::getSigned() const{
    return _is_signed;
}


int Form::getGradeSign() const {
    return _gradeReqToSign;
}


int Form::getGradeExec() const {
    return  _gradeReqToExec;
}


void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeReqToSign)
        throw Form::GradeTooLowException();
    _is_signed = true;
}

const char * Form::GradeTooHighException::what() const throw() {
    return "Form grade is too hight!";
}

const char * Form::GradeTooLowException::what() const throw() {
    return "Form grade is too low!";
}

std::ostream& operator<<(std::ostream& out, const Form& obj) {
   out << "Form: " << obj.getName() << "\n"
        << "Signed: " << (obj.getSigned() ? "Yes" : "No") << "\n"
        << "Grade to sign: " << obj.getGradeSign() << "\n"
        << "Grade to execute: " << obj.getGradeExec() << ".";
    return out;
}