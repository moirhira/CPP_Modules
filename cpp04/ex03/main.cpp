#include <iostream>
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void testInventoryFull()
{
    std::cout << "\n--- Test: Inventory Full ---" << std::endl;
    ICharacter* me = new Character("me");
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());

    // Fill the inventory (4 slots)
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("ice"));

    // Try to equip a 5th item
    AMateria* extra = src->createMateria("ice");
    me->equip(extra); // Should NOT be equipped
    
    // If your logic is correct, 'extra' is NOT in the inventory.
    // NOTE: Since it wasn't equipped, YOU are responsible for deleting it 
    // to avoid a memory leak in this specific test.
    delete extra; 
    
    delete src;
    delete me;
}



void testDeepCopy()
{
    std::cout << "\n--- Test: Deep Copy ---" << std::endl;
    Character* original = new Character("Original");
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    
    original->equip(src->createMateria("ice"));

    // Create a copy
    Character* copy = new Character(*original);

    // Delete the original. 
    // If shallow copy (WRONG): 'copy' now holds a pointer to deleted memory.
    delete original; 

    // Use the copy. 
    // If deep copy (CORRECT): This works fine.
    // If shallow copy (WRONG): This crashes or prints garbage.
    std::cout << "Using copy (should print ice msg): ";
    copy->use(0, *copy);

    delete copy;
    delete src;
}



void testUnknownAndUnequip()
{
    std::cout << "\n--- Test: Unknown & Unequip ---" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());

    ICharacter* me = new Character("me");

    // 1. Try to create unknown materia
    AMateria* tmp = src->createMateria("fire");
    if (tmp == NULL)
        std::cout << "OK: Unknown materia returned NULL" << std::endl;
    else
        std::cout << "FAIL: Unknown materia created!" << std::endl;

    // 2. Test Unequip
    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    // Save pointer before unequipping (because unequip doesn't delete it)
    AMateria* save = tmp; 
    
    me->unequip(0); // Slot 0 is now empty
    
    std::cout << "Using slot 0 (should do nothing): ";
    me->use(0, *me); 
    std::cout << std::endl;

    // We must manually delete the unequipped item to avoid leaks
    delete save; 
    
    delete me;
    delete src;
}



int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;


	testInventoryFull();
    testDeepCopy();
    testUnknownAndUnequip();
	return 0;
}
