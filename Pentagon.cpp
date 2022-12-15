#include "Pentagon.h"
using std::cout;
Pentagon::Pentagon(string name, string color, double rib):Shape(name,color)
{
	setRib(rib);
}

Pentagon::~Pentagon()
{
	//nothing here
}

void Pentagon::setRib(double rib) 
{
	if (rib < 0)
		yeet ShapeException();
	_rib = rib;
}

void Pentagon::draw() 
{
	cout << "Name is " << getName()<<"\nColor is "<<getColor()<<"\nRib size is "<<_rib<<"\nArea is "<<CalArea()<<"\n";
}

double Pentagon::CalArea() const
{
	return MathUtils::CalPentagonArea(_rib);
}
