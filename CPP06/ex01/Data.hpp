#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>
class Data{
    public:
        Data();
        ~Data();
        Data(std::string name);
        Data(const Data &data);
        Data & operator=(const Data &data);
        std::string getName() const;
    private:
        std::string name;
};
#endif