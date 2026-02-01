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

void BitcoinExchange::pocessInput(const std::string& filename) {
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()){
        throw std::runtime_error("Error: at opening the file.");
    }
    std::string line;
    std::getline(inputFile, line);
    while (std::getline(inputFile, line))
    {
        size_t pipe_v = line.find('|');

        if (pipe_v == std::string::npos)
            throw std::runtime_error("Error: bad input.");
        
        std::string date_v = trim(line.substr(0, pipe_v));
        std::string value_v = trim(line.substr(pipe_v + 1));
        

        if (std::count(date_v.begin(), date_v.end(), '-') != 2)
            throw std::runtime_error("Error: bad inppput.");
        
        std::cout << date_v <<  " => " << value_v << " = " << std::endl;

        
        
    }
}