#include "iter.hpp"


void printInt(int &x) {
    std::cout << x << " {} ";
}

void increment(int &x)
{
    x++;
}

template <typename T>
void printAll(T &x)
{
    std::cout << x << " | ";
}

int main(void)
{
    std::cout << "----- int array test -----\n";
    int arr[] = {1,2,4,5};
    ::iter(arr, 4, printInt);
    std::cout << std::endl;
    ::iter(arr, 4, increment);
    ::iter(arr, 4, printAll<int>);
    std::cout << std::endl;

    std::cout << "----- string array test -----\n";
    std::string strArr[] = {"Hello", "World", "42", "Rabat"};
    ::iter(strArr, 4, printAll<std::string>);
    std::cout << std::endl;

    std::cout << "----- const int  array test -----\n";
    const int constArr[] = {1,2,4,5};
    ::iter(constArr, 4, printAll<const int>);
    std::cout << std::endl;
    return 0;
}

