#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() {
    this->laodDatabase("data.csv");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & other) : _database(other._database) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange & other) {
    if (this != &other)
        this->_database = other._database;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::laodDatabase(const std::string& filename) {
    std::ifstream datafile(filename.c_str());
    if (!datafile.is_open()) {
        std::cerr << "Error: at opening the file." << std::endl;
        return;
    }
    std::string line;
    while (std::getline(datafile, line)) {
        std::cout << line << std::endl;
    }
    datafile.close();
}
void BitcoinExchange::pocessInput(const std::string& filename) {
    (void) filename;
}