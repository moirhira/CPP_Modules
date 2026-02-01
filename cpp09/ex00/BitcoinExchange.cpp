#include "BitcoinExchange.hpp"
#include <cstdlib> 

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
void BitcoinExchange::pocessInput(const std::string& filename) {
    (void) filename;
}