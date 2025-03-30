#include <iostream>//ShapeAreaCalculation
#include <string>
using namespace std;
class Shape{ //a class is a user defined data type which works as a blue print for an object
	public:
	double radius, length, width;
	public:
	void getDimensionsOfRectangle(){
		cout<<"Enter length: ";
		cin>>length;
		cout<<"Enter width: ";
		cin>>width;
	}
	void getDimensionsOfCircle(){
		cout<<"\nEnter radius: ";
		cin>>radius;
	}
	void printDimensionsOfRectangle(){
		cout<<"\nLength: "<<length;
		cout<<"\nWidth: "<<width;
	}
	void printDimensionsOfCircle(){
		cout<<"\nRadius: "<<radius;
	}
	public:
	virtual double calculateArea() = 0;
};
class Rectangle: public Shape{
	public:
	double calculateArea(){
		return length*width;
	}
};
class Circle: public Shape{
	public:
	double calculateArea(){
		return 3.14*radius*radius;
	}
};

int main(){// demonstrating how the object can used of this class
	Rectangle r1;
	r1.getDimensionsOfRectangle();
	r1.printDimensionsOfRectangle();
	double areaOfRectangle = r1.calculateArea();
	Circle c1;
	c1.getDimensionsOfCircle();
	c1.printDimensionsOfCircle();
	double areaOfCircle = c1.calculateArea();
	cout<<"\nArea of rectangle: "<<areaOfRectangle;
	cout<<"\nArea of circle: "<<areaOfCircle;
}