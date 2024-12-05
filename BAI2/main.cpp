#include <iostream>
#include "MyString.h"
using namespace std;
int main() {
    MyString<char> str1;  
    cout << "Default constructor: " << str1 << endl;

    MyString<char> str2("Hello, World!");  
    cout << "Constructor with string: " << str2 << endl;

    MyString<char> str3 = str2;  
    cout << "Copy constructor: " << str3 << std::endl;

    MyString<char> str4 = str2 + str3;  
    cout << "Concatenation (str2 + str3): " << str4 << endl;

    
    cout << "str2 == str3: " << (str2 == str3 ? "True" : "False") << endl;

    return 0;
}

