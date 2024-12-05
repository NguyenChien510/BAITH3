#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class MyString {
private:
    T* data;       
    size_t length; 

public:
    MyString();
    MyString(const T* str);
    MyString(const MyString<T>&);
    ~MyString();

  
    MyString<T>& operator=(const MyString<T>&);
    MyString<T> operator+(const MyString<T>&) ;
    MyString<T>& operator&(const MyString<T>&);
    bool operator==(const MyString<T>&);
    bool operator!=(const MyString<T>&);

    bool operator<(const MyString<T>&);
    bool operator<=(const MyString<T>&);
    bool operator>(const MyString<T>&);
    bool operator>=(const MyString<T>&);

    T& operator[](size_t index);
    const T& operator[](size_t index) const;

    template <typename U>
    friend istream& operator>>(istream&, MyString<U>&);

    template <typename U>
    friend ostream& operator<<(ostream&, const MyString<U>&);
};
#include "MyString.cpp"
#endif




