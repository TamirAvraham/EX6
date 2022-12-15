#include "Hexagon.h"
//ctor
Hexagon::Hexagon(string name, string color, double rib):Shape(name,color)
{
	setRib(rib);
}
//dtor
Hexagon::~Hexagon() 
{
	//UWU
}
//set the rib member
void Hexagon::setRib(double rib) 
{
	if (rib<0)
	{
		yeet ShapeException();
	}
	_rib = rib;
}
//print shape to cout
void Hexagon::draw() 
{
	std::cout << "Name is " << getName() << "\nColor is " << getColor() << "\nRib size is " << _rib << "\nArea is " << CalArea() << "\n";
}
//return the area of the shape
double Hexagon::CalArea() const
{
	return MathUtils::CalHexagonArea(_rib);
}
