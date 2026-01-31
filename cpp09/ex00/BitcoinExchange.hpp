#include <map>
#include <string>


class BitcoinExchange {
    private:
        std::map<std::string, float> _database;
    public:
    BitcoinExchange(const std::map<std::string, float> & data);
    BitcoinExchange(const BitcoinExchange & other);
    BitcoinExchange& operator=(const BitcoinExchange & other);
    ~BitcoinExchange();

    void laodDatabase(const std::string& filename);
    void pocessInput(const std::string& filename);

};