#include "Serializer.hpp"

int main()
{
    Data myData;
    myData.name = "none";
    std::cout << "Original ptr: " << &myData  << std::endl;
    uintptr_t raw = Serializer::serialize(&myData);
    std::cout << "Serialized: " << raw << std::endl;
    Data *ptr = Serializer::deserialize(raw);
    std::cout << "Deserialized: " << ptr << std::endl;

    if (&myData == ptr)
        std::cout << "Success\n";
    else
        std::cout << "Failure\n";
    return 0;
}