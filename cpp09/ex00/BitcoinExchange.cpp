#include "BitcoinExchange.hpp"
#include <cstdlib> 
#include <algorithm>

BitcoinExchange::BitcoinExchange() {
    this->loadDatabase("data.csv");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & other) : _database(other._database) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange & other) {
    if (this != &other)
        this->_database = other._database;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadDatabase(const std::string& filename) {
    std::ifstream datafile(filename.c_str());
    if (!datafile.is_open()) {
        throw std::runtime_error("Error: at opening the file.");
    }
    std::string line;
    std::getline(datafile, line);
    while (std::getline(datafile, line)) {
        size_t coma = line.find(',');

        std::string date_v = line.substr(0, coma);
        std::string rateStr = line.substr(coma + 1);
        float rate = std::strtof(rateStr.c_str(), NULL);
        _database[date_v] = rate;
    }
    datafile.close();
}

std::string trim(const std::string& str) {
    size_t start = 0;
    size_t end = str.size();

    while (start < end && std::isspace(static_cast<unsigned char>(str[start])))
        start++;

    while (end > start && std::isspace(static_cast<unsigned char>(str[end - 1])))
        end--;

    return str.substr(start, end - start);
}

bool isValidDate(const std::string& date)
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    

    int year_v = std::atoi(date.substr(0, 4).c_str());
    int month_v = std::atoi(date.substr(5, 2).c_str());
    int day_v = std::atoi(date.substr(8, 2).c_str());

    if (year_v < 2009 || month_v < 1 || month_v > 12 || day_v < 1 || day_v > 31)
        return false;

    return true;
}
void BitcoinExchange::pocessInput(const std::string& filename) {
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()){
        throw std::runtime_error("Error: at opening the file.");
    }
    std::string line;
    std::getline(inputFile, line);
    while (std::getline(inputFile, line))
    {
        if (line.empty())
            continue;

        size_t pipe_v = line.find('|');
        if (pipe_v == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        
        std::string date_v = trim(line.substr(0, pipe_v));
        std::string value_v = trim(line.substr(pipe_v + 1));
        

        try {
            if (!isValidDate(date_v))
            {
                std::cerr << "Error: bad input => " << date_v << std::endl;
                continue;  
            }
        }
        catch (...)
        {
            std::cerr << "Error: bad input => " << date_v << std::endl;
            continue; 
        }

  
        float value;
        try {
            value = std::strtof(value_v.c_str(), NULL);
        }
        catch (...) {
            std::cout << "Error: bad input => " << value_v << std::endl;
            continue;
        }
        
        if (value < 0){
            std::cout << "Error: not a positive number." << std::endl; 
            continue;
        }

        if (value > 1000){
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }    
        
        
        std::cout << date_v <<  " => " << value_v << " = " << std::endl;
    }
}