#include "ScalarConverter.hpp"

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
    int len = s.length();
    if (len < 2)
        return 0;
    if (s[len - 1] == 'f')
        return 0;
    int dotCount = 0;
    int start = 0;
    if (s[0] == '-' || s[0] == '+')
            start = 1;
    for (int i = start; i < len; i++)
    {
        if (s[i] == '.')
            dotCount++;
        else if (!isdigit(s[i]))
            return 0;
    }
    return (dotCount == 1);
}


int detectType(const std::string & s) {
    if (detectSpecialType(s))
        return 0;
    else if (detectChar(s))
        return 1;
    else if (detectInt(s))
        return 2;
    else if (detectFloat(s))
        return 3;
    else if (detectDouble(s))
        return 4;
    else 
        return -1;
}
