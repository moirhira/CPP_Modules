#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib> 
#include <ctime>

int main() {
    std::srand(std::time(0));

    try {
        Bureaucrat boss("Boss", 1);
        Bureaucrat intern("Intern", 140);

        ShrubberyCreationForm shrub("Garden");
        RobotomyRequestForm robot("Bender");
        PresidentialPardonForm pardon("Arthur Dent");

        std::cout << "\n--- TEST 1: Shrubbery (Intern signs, Intern executes) ---\n";
        intern.signForm(shrub);
        intern.executeForm(shrub); // Should work (Exec grade 137, Intern is 140 -> WAIT. 140 > 137. FAIL!)

        std::cout << "\n--- TEST 2: Robotomy (Boss signs, Boss executes) ---\n";
        boss.signForm(robot);
        boss.executeForm(robot); // 50% chance of success
        boss.executeForm(robot); // Try again to see different result

        std::cout << "\n--- TEST 3: Pardon (Intern tries to sign) ---\n";
        intern.signForm(pardon); // Should fail (Grade 140 vs 25)

        std::cout << "\n--- TEST 4: Pardon (Boss signs, Intern tries to execute) ---\n";
        boss.signForm(pardon);
        intern.executeForm(pardon); // Should fail (Grade 140 vs 5)
        
        std::cout << "\n--- TEST 5: Success Pardon ---\n";
        boss.executeForm(pardon); // Should work
    }
    catch (std::exception &e) {
        std::cout << "Global Exception: " << e.what() << std::endl;
    }
    return 0;
}