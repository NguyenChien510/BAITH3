#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;
class Person{
	private:
		string name;
		string address;
		string department;
	public:
		Person(string name,string address,string department)
			: name(name),address(address),department(department)
		{
		}
		virtual void print()
		{
			cout << "Name : " << name << " , Address : " << address << " , Department : " << department << endl;
		}
};


#endif 
