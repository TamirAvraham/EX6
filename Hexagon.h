#pragma once
#include "Shape.h"
#include <iostream>
#include "ShapeException.h"
#include "MathUtils.h"
using std::string;
class Hexagon :public Shape
{
private:
	double _rib;
public:
	
	Hexagon(string name, string color, double rib);
	virtual ~Hexagon();
	void setRib(double rib);
	virtual void draw();
	virtual double CalArea()const;
};

