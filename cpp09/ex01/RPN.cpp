#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN& other){(void)other;}

RPN& RPN::operator=(const RPN& other) {
    (void) other;
    return *this;
}

RPN::~RPN() {}



void RPN::calculte(const std::string& expression) {
    std::stack<int> myStack;
    std::string::const_iterator it = expression.begin();
    while  (it != expression.end())
    {
        if (isspace(*it))
        {
            it++;
            continue;
        }
        if (isdigit(*it))
        {
            int cur = *it - '0';
            myStack.push(cur);
        }
        else if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
        {
            if (myStack.size() < 2)
            {
                std::cerr << "Error" << std::endl;
                return;
            }
            int b = myStack.top();
            myStack.pop();
            int a = myStack.top();
            myStack.pop();

            if (*it == '+')
                myStack.push(a + b);
            else if (*it == '-')
                myStack.push(a - b);
            else if (*it == '*')
                myStack.push(a * b);
            else if (*it == '/')
            {
                if (b == 0)
                {
                   std::cerr << "Error" << std::endl;
                    return; 
                }
                myStack.push(a / b);
            }
        }
        else{
            std::cerr << "Error" << std::endl;
                return;
        }
        it++;
    }
    if (myStack.size() == 1)
        std::cout << myStack.top() << std::endl;
    else
        std::cerr << "Error" << std::endl;
}