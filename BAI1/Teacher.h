#include "Person.h"
class Teacher : public Person
{
	private:
		string Rank;
	public:
		Teacher(string n,string a,string d,string r)
			:Person(n,a,d),Rank(r)
		{
		}
		void print()
		{
			Person::print();
			cout << "Rank : " << Rank << endl;
		}
};
