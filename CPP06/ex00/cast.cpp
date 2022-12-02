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
    this->int_t = cast.getInt();
    this->char_t = cast.getChar();
    this->float_t = cast.getFloat();
    this->double_t = cast.getDouble();
    this->type_t = cast.getType();
}

Cast &Cast::operator=(const Cast &cast)
{
    this->int_t = cast.getInt();
    this->char_t = cast.getChar();
    this->float_t = cast.getFloat();
    this->double_t = cast.getDouble();
    this->type_t = cast.getType();
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

//Depende del caso retornarmos el tipo que tenemos en nuestro enum
type_en Cast::find_type(std::string value)
{
    int i = 0;
    int k = 0;
    if (value == "+inf" || value == "+inff" || value == "inf" || value == "inff" )
        return TP_INF_P;
    if (value == "-inf" || value == "-inff")
        return TP_INF_M;
    if (value == "nan" || value == "nanf")
        return TP_NAN;

    if(value[i] == '-')
        i++;
    while(std::isdigit(value[i]))
        i++;
    if (value[i] == '.')
    {
        k = i;
        k++;
        while(std::isdigit(value[k]))
            k++;
        if(value[k] == 'f' && !value[k + 1])
            return TP_FLOAT;
        if(value[k] == 0 )
            return TP_DOUBLE;
        else
            return TP_NOT;
    }
    if(i > 0)
        return TP_INT;

    return TP_NOT;
}

Cast::Cast(std::string value)
{
    this->type_t = find_type(value);
    this->char_t = 0;   
    switch (this->type_t)
    {
        case TP_INT:
            this->int_t = std::atoi(value.c_str());
            this->float_t = static_cast<float>(this->int_t);
            this->double_t = static_cast<double>(this->int_t);
            this->char_t = static_cast<char>(this->int_t);
            break;

        case TP_FLOAT:
            this->float_t = std::atof(value.c_str());
            this->int_t = static_cast<int>(this->float_t);
            this->double_t = static_cast<double>(this->float_t);
            this->char_t = static_cast<char>(this->float_t);
            break;
        case TP_DOUBLE:
            this->double_t = std::atof(value.c_str());
            this->int_t = static_cast<int>(this->double_t);
            this->float_t = static_cast<float>(this->double_t);
            this->char_t = static_cast<char>(this->double_t);
            break;
        case TP_INF_P:
            this->float_t = std::numeric_limits<float>::infinity();
            this->double_t = std::numeric_limits<double>::infinity();
            break;
        case TP_INF_M:
            this->float_t = std::numeric_limits<float>::infinity() * -1;
            this->double_t = std::numeric_limits<double>::infinity() * -1;
            break;
        case TP_NAN:
            this->float_t = std::numeric_limits<float>::quiet_NaN();
            this->double_t = std::numeric_limits<double>::quiet_NaN();
            break;
        case TP_NOT:
            throw NonNumVal();
            break ;
    }
}

std::ostream &operator<<(std::ostream &os, const Cast &cast)
{
    int type;

    type = cast.getType();
    //PRINT CHAR
    os << std::endl;
    if (cast.getInt() < 0 || cast.getInt() > 127 || type == TP_INF_P || type == TP_INF_M || type == TP_NAN)
        os << "char: impossible" <<std::endl;
    else if (std::isprint(cast.getChar()) == 0)
        os << "char: Non displayable" << std::endl;
    else 
        os << "char: " << cast.getChar() << std::endl;
    //PRINT INT
    if(type == TP_INF_P || type == TP_INF_M || type == TP_NAN)
        os << "int: impossible" <<std::endl;
    else
        os << "int: " << cast.getInt() <<std::endl;
    //PRINT FLOAT
    os << "float: " << cast.getFloat();
    if(cast.getFloat() == cast.getInt())
        os << ".0";
    os << "f" << std::endl;
    //PRINT DOUBLE
    os << "double: " << cast.getDouble();
    if(cast.getDouble() == cast.getInt())
        os << ".0" << std::endl;

    return os;
}