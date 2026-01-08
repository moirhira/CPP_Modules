#include "ScalarConverter.hpp"


static void printOutput(char c, int i, float f, double d, bool imp_char, bool imp_int) {
    if (imp_char)
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << c  << "'" << std::endl;
    
    if (imp_int)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i  << std::endl;
    
    std::cout << "float: " << std::fixed << std::setprecision(1) <<  f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << d  << std::endl;
}

void ScalarConverter::convert(const std::string & s_scalar) {
    char c_val = 0;
    int i_val  = 0;
    float f_val = 0.0f;
    double d_val = 0.0;

    bool impossible_char = false;
    bool impossible_int  = false;

    int type = detectType(s_scalar);

    if (type == 0)
    {
        impossible_int = true;
        impossible_char = true;
        d_val = std::strtod(s_scalar.c_str(), NULL);
        f_val = static_cast<float>(d_val);
    }
    else if (type == 1)
    {
        c_val = s_scalar[0];
        i_val = static_cast<int>(c_val);
        f_val = static_cast<float>(c_val);
        d_val = static_cast<double>(c_val);
    }
    else if (type == 2)
    {
        long tmp = std::strtol(s_scalar.c_str(), NULL, 10);
        if (tmp < INT_MIN || tmp > INT_MAX)
        {
            impossible_char = true;
            impossible_int  = true;
            d_val = std::strtod(s_scalar.c_str(), NULL);
            f_val = static_cast<float>(d_val);
        }
        else
        {
            i_val = static_cast<int>(tmp);
            c_val = static_cast<char>(i_val);
            f_val = static_cast<float>(i_val);
            d_val = static_cast<double>(i_val);
            if (i_val < 0 || i_val > 127)
                impossible_char = true;
        }
        
    }
    else if (type == 3)
    {
        f_val = std::strtof(s_scalar.c_str(), NULL);
        d_val= static_cast<double>(f_val);

        if (std::isnan(f_val) || std::isinf(f_val) || 
            d_val > static_cast<double>(INT_MAX) || d_val < static_cast<double>(INT_MIN))
        {
            impossible_char = true;
            impossible_int = true;
        }
        else
        {
            i_val = static_cast<int>(f_val);
            c_val = static_cast<char>(i_val);
            if (i_val < 0 || i_val > 127)
                impossible_char = true;
        }
        
    }
    else if (type == 4)
    {
        d_val = std::strtod(s_scalar.c_str(), NULL);
        f_val= static_cast<float>(d_val);

        if (std::isnan(d_val) || std::isinf(d_val) ||
            d_val > static_cast<double>(INT_MAX) || d_val < static_cast<double>(INT_MIN))
        {
            impossible_char = true;
            impossible_int = true;
        }
        else
        {
            i_val = static_cast<int>(d_val);
            c_val = static_cast<char>(i_val);
            if (i_val < 0 || i_val > 127)
                impossible_char = true;
        }
    }
    else
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: impossible\n";
        std::cout << "double: impossible\n";
        return;
    }
    printOutput(c_val, i_val, f_val, d_val, impossible_char, impossible_int);
}

