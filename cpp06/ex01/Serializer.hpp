#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP
#include  <iostream>
#include <string>
#include <stdint.h>

struct Data {
    std::string name;
};

class Serializer {
    private:
        Serializer();
        Serializer(const Serializer & other);
        Serializer& operator=(const Serializer & othre);
        ~Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};

#endif