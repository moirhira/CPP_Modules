#include "Array.hpp"

template <typename T>
void printArray(Array<T>&arr)
{
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main(void)
{
    std::cout << "--------test integers----------\n";
    try
    {
        Array<int> integers(4);
        integers[0] = 1;
        integers[1] = 15;
        integers[2] = 41;
        integers[3] = 8;
        printArray(integers);
        integers[7] = 9;
    }
    catch(std::exception & e)
    {
        std::cout <<e.what() << std::endl;
    }
    std::cout << "\n--------test strings----------\n";
    try
    {
        Array<std::string> strings(4);
        strings[0] = "hello1";
        strings[1] = "hello2";
        strings[2] = "hello3";
        strings[3] = "hello4";
        printArray(strings);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----------test empty-----------" << std::endl;
    try {
        Array<int> empty;
        std::cout << "Size of empty: " << empty.size() << std::endl;
        std::cout << "Accessing empty[0]: " << empty[0] << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

}