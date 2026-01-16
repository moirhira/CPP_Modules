#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>


template <typename T>
class Array {
    private:
        T* _data;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);

        Array(const Array& other);

        Array& operator=(const Array& other);

        ~Array();

        T& operator[](unsigned int index) ;

        const T& operator[](unsigned int index) const ;

        unsigned int size() const;

        class OutOfBoundException : public std::exception {
            const char * what() const throw();
        };
};

template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n) {

}

template <typename T>
Array<T>::~Array() {delete[] _data;}


template <typename T>
Array<T>::Array(const Array<T> & other) : _data(NULL), _size(0) {
    if (other._size > 0)
    {
        this->_data = new T[other._size]();
        this->_size = other._size;
        for (unsigned int i = 0; i < this->_size; i++)
        {
            this->_data[i] = other._data[i];
        }
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> & other) {
    if (this != &other) {
        delete[] _data;
        _data = NULL;
        _size = 0;
        if (other._size > 0) {
            _data = new T[other._size]();
            _size = other._size;
            for (unsigned int i = 0; i < _size; i++)
                _data[i] = other._data[i];
        }
    }
    return *this;
}


template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (_size <= index)
        throw OutOfBoundException();
    return _data[index];

}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const { 
    if (_size <= index)
        throw OutOfBoundException();
    return _data[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

template <typename T>
const char* Array<T>::OutOfBoundException::what() const throw(){ 
    return "Error\nIndex out of bounds";
}


#endif