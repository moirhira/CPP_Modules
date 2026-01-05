#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Default"), _is_signed(false), _gradeReqToSign(150) ,_gradeReqToExec(150){}



AForm::AForm(const std::string name, int req_sign , int req_exec) 
: _name(name), _is_signed(false), _gradeReqToSign(req_sign) , _gradeReqToExec(req_exec) 
{
    if (req_sign < 1 || req_exec < 1)
        throw GradeTooHighException();
    if (req_sign > 150 || req_exec > 150)
        throw GradeTooLowException();
}


AForm::AForm(const AForm &other) 
    : _name(other._name), _is_signed(other._is_signed),
     _gradeReqToSign(other._gradeReqToSign), _gradeReqToExec(other._gradeReqToExec)
{}



AForm& AForm::operator=(const AForm &other) {
    if (this != &other)
    {
        this->_is_signed = other._is_signed;
    }
    return *this;
}


AForm::~AForm() {}



std::string AForm::getName() const {
    return _name;
}


bool AForm::getSigned() const{
    return _is_signed;
}


int AForm::getGradeSign() const {
    return _gradeReqToSign;
}


int AForm::getGradeExec() const {
    return  _gradeReqToExec;
}


void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeReqToSign)
        throw AForm::GradeTooLowException();
    _is_signed = true;
}

const char * AForm::GradeTooHighException::what() const throw() {
    return "Form grade is too high!";
}

const char * AForm::GradeTooLowException::what() const throw() {
    return "Form grade is too low!";
}

const char * AForm::FormNotSignedException::what() const throw() {
    return "Form not signed!";
}

std::ostream& operator<<(std::ostream& out, const AForm& obj) {
   out << "Form: " << obj.getName() << "\n"
        << "Signed: " << (obj.getSigned() ? "Yes" : "No") << "\n"
        << "Grade to sign: " << obj.getGradeSign() << "\n"
        << "Grade to execute: " << obj.getGradeExec() << ".";
    return out;
}