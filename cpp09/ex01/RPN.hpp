#include <stack>
#include <string>
#include <iostream>
#include <cstdlib>


class RPN {
    public:
    RPN();
    RPN(const RPN& other);
    RPN& operator=(const RPN& other);
    ~RPN();

    static void calculte(const std::string& expression);
};

