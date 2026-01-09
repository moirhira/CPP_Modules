#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <climits>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <cmath>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();
    public:
        static void convert(const std::string & s_scalar);
};

int detectType(const std::string & s);
#endif