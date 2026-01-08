#include "ScalarConverter.hpp"

int countDot(const std::string & s) {
    int count  = 0;
    int i = 0;
    while (s[i])
    {
        if (s[i] == '.')
            count++;
        i++;
    }
    
    return  count;
}

int detectSpecialType(const std::string & s) {
    if ((s == "-inff") || (s == "+inff") || (s == "nanf") 
        || (s == "-inf") || (s == "+inf") || (s == "nan"))
    {
        return 1;
    }
    return 0;
}

int detectChar(const std::string & s) {
    if (s.length() == 1 && !isdigit(s[0]))
        return 1;
    return 0;
}


int detectInt(const std::string & s) {
    int len =  s.length();
    int start = 0;
    if (s[0] == '-' || s[0] == '+')
            start = 1;
    for (int i = start; i < len; i++)
    {   
        if (!isdigit(s[i]))
            return 0;
    }
    return 1;
}


int detectFloat(const std::string & s) {
    int len = s.length();
    if (len < 2)
        return 0;
    if (s[len  - 1] != 'f')
        return 0;
    int dotCount = 0;
    int start = 0;
    if (s[0] == '-' || s[0] == '+')
            start = 1;
    for (int i = start; i < len - 1; i++)
    {
        if (s[i] == '.')
            dotCount++;
        else if (!isdigit(s[i]))
            return 0;
    }
    return (dotCount == 1);
}


int detectDouble(const std::string & s) {
    if (s[s.length() - 1] != 'f' && countDot(s) == 1)
        return 1;
    return 0;
}


int detectType(const std::string & s) {
    if (detectSpecialType(s))
    {
        std::cout << "special type\n";
        return 0;
    }
    else if (detectChar(s))
    {
        std::cout << "char type\n";
        return 1;
    }
    else if (detectInt(s))
    {
        std::cout << "int type\n";
        return 2;
    }
    else if (detectFloat(s))
    {
        std::cout << "float type\n";
        return 3;
    }
    else if (detectDouble(s))
    {
        std::cout << "double type\n";
        return 4;
    }
    else 
    {
        std::cout << "none type\n";
        return -1;
    }
}

void ScalarConverter::convert(const std::string & s_scalar) {
    detectType(s_scalar);

}
