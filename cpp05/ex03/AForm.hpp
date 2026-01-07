#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm {
    private:
        const std::string   _name;
        bool                _is_signed;
        const int           _gradeReqToSign;
        const int           _gradeReqToExec;
    public:
        AForm();
        AForm(const std::string name, int req_sign , int req_exec);
        AForm(const AForm &other);
        AForm& operator=(const AForm &other);
        virtual ~AForm();

        std::string getName() const;
        bool        getSigned() const;
        int         getGradeSign() const;
        int         getGradeExec() const;


        void         beSigned(const Bureaucrat& bureaucrat);

        virtual void  execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception{
            public:
                virtual const char * what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what() const throw();
        };


        class FormNotSignedException : public std::exception {
            public:
                virtual const char * what() const throw();
        };

};


std::ostream& operator<<(std::ostream& out, const AForm& obj);


#endif