#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
        

        std::cout << "----- Wrong Animal Test -----" << std::endl;
        const WrongAnimal* wrong = new WrongAnimal();
        const WrongAnimal* cat = new WrongCat();

        cat->makeSound();
        wrong->makeSound();

        delete wrong;
        delete cat;

        return 0;
}