#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(const std::map<std::string, float> & data) : _database(data){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & other) : _database(other._database) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange & other) {
    if (this != &other)
        this->_database = other._database;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::laodDatabase(const std::string& filename) {

}
void BitcoinExchange::pocessInput(const std::string& filename) {

}