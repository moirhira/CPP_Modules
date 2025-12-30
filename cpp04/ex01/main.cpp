#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

        const Animal *j = new Dog();
        const Animal *i = new Cat();
        delete j;
        delete i;

        

        Animal *animals[6];

        for (int i = 0; i < 6; i++)
        {
                if (i < 3)
                        animals[i] = new Dog();
                else
                        animals[i] = new Cat();
        }

        for (int i = 0; i < 6; i++)
                delete animals[i];

        Dog basic;
        Dog copy = basic;
        // std::cout << "Basic Brain Address: " << basic.getBrain() << std::endl;
        // std::cout << "Tmp   Brain Address: " << copy.getBrain() << std::endl;
        return 0;
}
