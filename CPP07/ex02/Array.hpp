#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
template <class T>
class Array{
    private:
        T *elements;
        unsigned int len;
    public:
        Array(){ //vacio
            this->elements = NULL;
            this->len = 0;
        }
        Array(const Array& array) //copia
        {
            this->len = array.len;
            this->elements = new T[array.len];
            for (unsigned int i = 0; i < this->len; i++)
            {
                this->elements[i] = array.elements[i];
            }
        }
        Array(unsigned int size) //parametro
        {
            this->len = size;
            this->elements = new T[size]();
        }
        ~Array() //destr
        {
            delete[]this->elements;
        }

        Array& operator =(const Array& array) //operador =
        {
            if (array == this)
                return (*this);
            if (this->elements)
                delete[]this->elements;
            this->len = array.size();
            this->elements = new T[array.len];
            for (unsigned int i = 0; i < this->len; i++)
                this->elements[i] = array.elements[i];
            return *this;
        }

        T&  operator [](unsigned int i) const //operador []
        {
            //std::cout << i << std::endl;
            //std::cout << "LEN" << this->len << std::endl;
            if(i >= this->len || i < 0)
                throw outOfBounds();
            return (this->elements[i]);
         
        }
        unsigned int size() const //size
        {
            return this->len;
        }

        struct outOfBounds : public std::exception
        {
            const char * what () const throw ()
            {
                 return "Index Out of Boundssss";
            }
        };
};
#endif