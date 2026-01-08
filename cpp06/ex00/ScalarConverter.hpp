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
        ScalarConverter(const ScalarConverter &);
        ScalarConverter &operator=(const ScalarConverter &);
    public:
        static void convert(const std::string & s_scalar);
};

int detectType(const std::string & s);
#endif