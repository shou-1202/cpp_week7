#include <iostream>//AcademicHierarchy
#include <string>
using namespace std;
class Person{ //a class is a user defined data type which works as a blue print for an object
	public:
	string name;
	void setName(){
		cout<<"Enter name: ";
		cin>>name;
		cout<<"\nName: "<<name;
	}
};
class Teacher: public Person{
	public:
	string subject;
	void setSubject(){
		cout<<"\nEnter subject: ";
		cin>>subject;
		cout<<"\nSubject: "<<subject;
	}
};
class Professor: public Teacher{
	public:
	string department;
	void setDepartment(){
		cout<<"\nEnter department: ";
		cin>>department;
		cout<<"\nDepartment: "<<department;
	}
};

int main(){// demonstrating how the object can used of this class
	Professor p;
	p.setName();
	p.setSubject();
	p.setDepartment();
}