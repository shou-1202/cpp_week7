#include <iostream>//StudentAthleteSystem
#include <string>
using namespace std;
class Student{ //a class is a user defined data type which works as a blue print for an object
	public:
	string name;
    int rollNumber;
	public:
	void studentDetails(string studentName, int number){
		name = studentName;
		rollNumber = number;
	}
};
class SportsPlayer{ 
	public:
	string sportsName;
    int ranking;
	public:
	void sportDetails(string sport, int rank){
		sportsName = sport;
		ranking = rank;
	}
};
class SportsStudent: public Student, public SportsPlayer{
	public:
	void displayinfo(){
		cout<<"\nStudent name: "<<name;
		cout<<"\nRoll number: "<<rollNumber;
		cout<<"\nSport name: "<<sportsName;
		cout<<"\nRanking: "<<ranking;
	}
};

int main(){// demonstrating how the object can used of this class
	SportsStudent s1;
	s1.studentDetails("ABC", 21);
	s1.sportDetails("Cricket", 15);
	s1.displayinfo();
}