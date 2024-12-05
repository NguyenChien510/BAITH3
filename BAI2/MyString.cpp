#include "MyString.h"

template <typename T>
MyString<T>::MyString() : data(new T[1]{'\0'}), length(0) {}

template <typename T>
MyString<T>::MyString(const T* str) {
    length = strlen(str);
    data = new T[length + 1];
    strcpy(data, str);
}


template <typename T>
MyString<T>::MyString(const MyString<T>& other) {
    length = other.length;
    data = new T[length + 1];
    strcpy(data, other.data);
}


template <typename T>
MyString<T>::~MyString() {
    delete[] data;
}


template <typename T>
MyString<T>& MyString<T>::operator=(const MyString<T>& other) {
    if (this != &other) {
        delete[] data;
        length = other.length;
        data = new T[length + 1];
        strcpy(data, other.data);
    }
    return *this;
}


template <typename T>
MyString<T> MyString<T>::operator+(const MyString<T>& other){
    size_t newLength = length + other.length;
    T* newData = new T[newLength + 1];
    strcpy(newData, data);
    strcat(newData, other.data);
    MyString<T> result(newData);
    delete[] newData;
    return result;
}


template <typename T>
MyString<T>& MyString<T>::operator&(const MyString<T>& other) {
    *this = *this + other;
    return *this;
}


template <typename T>
bool MyString<T>::operator==(const MyString<T>& other){
    return strcmp(data, other.data) == 0;
}


template <typename T>
bool MyString<T>::operator!=(const MyString<T>& other) {
    return !(*this == other);
}


template <typename T>
bool MyString<T>::operator<(const MyString<T>& other){
    return strcmp(data, other.data) < 0;
}


template <typename T>
bool MyString<T>::operator<=(const MyString<T>& other) {
    return strcmp(data, other.data) <= 0;
}


template <typename T>
bool MyString<T>::operator>(const MyString<T>& other){
    return strcmp(data, other.data) > 0;
}


template <typename T>
bool MyString<T>::operator>=(const MyString<T>& other) {
    return strcmp(data, other.data) >= 0;
}


template <typename T>
T& MyString<T>::operator[](size_t index) {
    return data[index];
}

template <typename T>
const T& MyString<T>::operator[](size_t index) const{
    return data[index];
}


template <typename T>
istream& operator>>(istream& is, MyString<T>& str) {
    T buffer[1000];
    is >> buffer;
    str = MyString<T>(buffer);
    return is;
}


template <typename T>
ostream& operator<<(ostream& os, const MyString<T>& str) {
    os << str.data;
    return os;
}

