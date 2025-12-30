#include "Harl.hpp"

Harl::Harl() {}

void Harl::debug( void ){
        std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my burger!\n\n";
}

void Harl::info( void ){
        std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe extra bacon costs more!\n\n"; 
}

void Harl::warning( void ){
       std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve some extra bacon for free.\n\n";
}

void Harl::error( void ){
        std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager!\n\n";
}


void Harl::complain( std::string level){

        typedef void (Harl::*Harlfnt)(void);
        
        
        Harlfnt functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
        
        std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        
        for (int i = 0; i < 4; i++)
        {
                if (levels[i] == level)
                {
                        (this->*functions[i])();
                        return;
                }
        }
        std::cout << "[ NOT VALID LEVEL ]" << std::endl;
}