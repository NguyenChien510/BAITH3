#include "Student.h"
#include "Teacher.h" 
#include <vector>
class Class
{
	private:
		string Name;  // Ten Lop
		int NumOfStudents;
		Teacher Advisor;
		vector<Student>StudentList;
	public:
		Class(string name,Teacher advisor)
			:Name(name),Advisor(advisor),NumOfStudents(0)
		{
		}
		void AddStudent(Student s)
		{
			StudentList.push_back(s);
			NumOfStudents++;
		}
		void PrintList()
		{
			cout << "Class : " << Name << " , Number of Students : " << NumOfStudents << endl<<endl;
			cout << "Advisor : ";Advisor.print(); cout<< endl;
			cout << "Student List : " << endl;
			for(auto s : StudentList)
			{
				s.print();
			}
		}
};
