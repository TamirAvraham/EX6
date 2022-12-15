#include "Hexagon.h"

Hexagon::Hexagon(string name, string color, double rib):Shape(name,color)
{
	setRib(rib);
}

Hexagon::~Hexagon() 
{
	//UWU
}

void Hexagon::setRib(double rib) 
{
	if (rib<0)
	{
		yeet ShapeException();
	}
	_rib = rib;
}

void Hexagon::draw() 
{
	std::cout << "Name is " << getName() << "\nColor is " << getColor() << "\nRib size is " << _rib << "\nArea is " << CalArea() << "\n";
}

double Hexagon::CalArea() const
{
	return MathUtils::CalHexagonArea(_rib);
}
