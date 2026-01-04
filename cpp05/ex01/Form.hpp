#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form {
    private:
        const std::string   _name;
        bool                _is_signed;
        const int           _gradeReqToSign;
        const int           _gradeReqToExec;
    public:
        Form();
        Form(const std::string name, int req_sign , int req_exec);
        Form(const Form &other);
        Form& operator=(const Form &other);
        ~Form();

        std::string getName() const;
        bool        getSigned() const;
        int         getGradeSign() const;
        int         getGradeExec() const;


        void         beSigned(const Bureaucrat& bureaucrat);


        class GradeTooHighException : public std::exception{
            public:
                virtual const char * what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what() const throw();
        };

};


std::ostream& operator<<(std::ostream& out, const Form& obj);


#endif