#include <iostream>//StudentPerformanceSystem
#include <string>
using namespace std;
class Student{ //a class is a user defined data type which works as a blue print for an object
	public:
	string name;
	int rollNumber;
	void setStudentDetails(){
		cout<<"Enter name: ";
		cin>>name;
		cout<<"\nName: "<<name;
		cout<<"\nEnter roll number: ";
		cin>>rollNumber;
		cout<<"\nRoll Number: "<<rollNumber;
	}
};
class Marks:virtual public Student{
	public:
	double marksInPhysics, marksInChemistry, marksInMaths;
	void calculateMarks(double physics, double chemistry, double maths){
		marksInPhysics = physics;
		marksInChemistry = chemistry;
		marksInMaths = maths;
		cout<<"\nTotal Academic Marks: "<<marksInChemistry+marksInMaths+marksInPhysics;
	}
};
class Sports:virtual public Student{
	public:
	double sportsMarks;
	void calculateSportsMarks(double marksInSports){
		sportsMarks = marksInSports;
		cout<<"\nSports Marks: "<<sportsMarks;
	}
};
class Result:public Marks, public Sports{
	public:
	double calculateTotalMarks(){
		
		return marksInChemistry+marksInMaths+marksInPhysics+sportsMarks;
	}
};

int main(){// demonstrating how the object can used of this class
	Result r1;
	r1.setStudentDetails();
	r1.calculateMarks(98.5,97,92.5);
	r1.calculateSportsMarks(85);
	double TotalMarks = r1.calculateTotalMarks();
	cout<<"\nTotal Marks: "<<TotalMarks;
}