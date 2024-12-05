#include"Class.h"
int main()
{
	Teacher advisor("DHP", "Phan Chau Trinh", "IT", "Full Professor");
    Class class07T2("07T2", advisor);

    Student student1("Nguyen Le Minh Chien", "Nguyen Du", "IT", "07T2");
    Student student2("Le Minh Nhat", "Hoang Dieu", "IT", "07T2");

    class07T2.AddStudent(student1);
    class07T2.AddStudent(student2);
    class07T2.PrintList();
}
