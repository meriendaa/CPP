#include "Data.hpp"

static uintptr_t serialize(Data *ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

static Data *deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));

}


int main()
{
    Data *d1;
    Data *d2;
    uintptr_t raw;
    uintptr_t raw2;
    d1 = new Data("Teo");
    std::cout << "DATA_1: " << d1 << std::endl;
    raw = serialize(d1);
    d2 = deserialize(raw);
    std::cout << "DATA_2: " << d2 << std::endl;
    raw2 = serialize(d2);
    std::cout << std::endl;
    std::cout << "UINTPTR_1 " << raw << std::endl;
    std::cout << "UINTPTR_2 " << raw2 << std::endl;
    if(d1 == d2)
        std::cout << "Are the same" << std::endl;
    else
        std::cout << "Are Different" << std::endl;
    delete(d1);
}