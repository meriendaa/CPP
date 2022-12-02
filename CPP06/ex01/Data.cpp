#include "Data.hpp"

Data::~Data(){}
Data::Data()
{
    this->name = "Default";
}
Data::Data(const Data &data)
{
    this->name = data.getName();
}
Data::Data(std::string name)
{
    this->name = name;
}

Data &Data::operator=(const Data &data)
{
    this->name = data.getName();
    return *this;
}

std::string Data::getName()const{
    return this->name;
}