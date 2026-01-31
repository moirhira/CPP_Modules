#include <map>
#include <string>
#include <iostream>
#include <exception>


class BitcoinExchange {
    private:
        std::map<std::string, float> _database;
    public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange & other);
    BitcoinExchange& operator=(const BitcoinExchange & other);
    ~BitcoinExchange();

    void laodDatabase(const std::string& filename);
    void pocessInput(const std::string& filename);

};