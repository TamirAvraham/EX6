#include "Pentagon.h"
using std::cout;
//ctor
Pentagon::Pentagon(string name, string color, double rib):Shape(name,color)
{
	setRib(rib);
}
//dtor
Pentagon::~Pentagon()
{
	//nothing here
}
//set rib member
void Pentagon::setRib(double rib) 
{
	if (rib < 0)
		yeet ShapeException();
	_rib = rib;
}
//print shape to cout
void Pentagon::draw() 
{
	cout << "Name is " << getName()<<"\nColor is "<<getColor()<<"\nRib size is "<<_rib<<"\nArea is "<<CalArea()<<"\n";
}
//return the area of shape
double Pentagon::CalArea() const
{
	return MathUtils::CalPentagonArea(_rib);
}
