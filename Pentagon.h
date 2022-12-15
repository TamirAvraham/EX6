#pragma once
#include "Shape.h"
#include "ShapeException.h"
#include "MathUtils.h"
#include <string>
#include <iostream>
using std::string;
class Pentagon :public Shape
{
private:
	double _rib;
public:
	Pentagon(string name,string color,double rib);
	virtual ~Pentagon();
	void setRib(double rib);
	virtual void draw(); 
	virtual double CalArea()const;
};

