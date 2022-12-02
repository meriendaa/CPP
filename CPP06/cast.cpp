#include "cast.hpp"

Cast::~Cast(){}

Cast::Cast()
{
    this->int_t = 0;
    this->char_t = 0;
    this->float_t = 0;
    this->double_t = 0;
    this->type_t = 0;
}

Cast::Cast(const Cast &cast)
{
    this->int_t = this->getInt();
    this->char_t = this->getChar();
    this->float_t = this->getFloat();
    this->double_t = this->getDouble();
    this->type_t = this->getType();
}

Cast &Cast::operator=(const Cast &cast)
{
    this->int_t = this->getInt();
    this->char_t = this->getChar();
    this->float_t = this->getFloat();
    this->double_t = this->getDouble();
    this->type_t = this->getType();
    return *this;
}

int Cast::getInt() const {
    return this->int_t;
}

float Cast::getFloat() const {
    return this->float_t;
}

double Cast::getDouble() const{
    return this->double_t;
}

char Cast::getChar() const {
    return this->char_t;
}

int Cast::getType() const {
    return this->type_t;
}


type_en Cast::find_type(std::string value)
{
    
}

Cast::Cast(std::string value)
{
    this->type_t = find_type(value);
    switch (this->type_t)
    {
        case 0:
            break;
        
        default:
            break;
    }
}