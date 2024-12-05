#include "Person.h"
class Student : public Person
{
	private:
		string ClassName;
	public:
		Student(string name,string address,string department,string classname)
			: Person(name,address,department),ClassName(classname)
		{
		}
		void print()
		{
			Person::print();
			cout << "Class Name : " << ClassName << endl;
		}
};

