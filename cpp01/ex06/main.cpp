#include "Harl.hpp"


int main(int ac, char **av)
{
        if (ac == 2)
        {
                std::string command = av[1];
                Harl harl;
                harl.complain(command);
        }
        else
        {
                std::cerr << "Usage: ./harlFilter one of ['DEBUG', 'INFO', 'WARNING', 'ERROR']" << std::endl;
                return (1); 
        }
        return (0);
}