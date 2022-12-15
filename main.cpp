#include "Shape.h"
#include "Circle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "ShapeException.h"
#include "InputError.h"
#include "Pentagon.h"
#include "Hexagon.h"
#include <string>
#include <iostream>
#define print(a) std::cout<<a<<"\n";
/// <summary>
/// cleasr std::cin for new input
/// </summary>
void CleanCin() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{
	
	std::string nam, col; double rad = 0, ang = 0, ang2 = 180; int height = 0, width = 0;
	Circle circ(col, nam, rad);
	Quadrilateral quad(nam, col, width, height);
	rectangle rec(nam, col, width, height);
	Parallelogram para(nam, col, width, height, ang, ang2);
	Hexagon hex(nam, col, rad);
	Pentagon pent(nam, col, rad);

	Shape *ptrcirc = &circ;
	Shape *ptrquad = &quad;
	Shape *ptrrec = &rec;
	Shape *ptrpara = &para;
	Shape* ptrpent = &pent;
	Shape* ptrhex = &hex;

	
	std::cout << "Enter information for your objects" << std::endl;
	const char circle = 'c', quadrilateral = 'q', rectangle = 'r', parallelogram = 'p',hexagon='h',penatgon='n'; char shapetype; std::string countStr;
	char x = 'y';
	while (x != 'x') {
		std::cout << "which shape would you like to work with?.. \nc=circle, q = quadrilateral, r = rectangle, p = parallelogram,h=hexagram,n=pentagram" << std::endl;
		std::cin >> countStr;
		shapetype = countStr[0];
		if (countStr.length()>1)
		{
			print("Warning - Don't try to build more than one shape at once!");
			CleanCin();
		}
		try
		{

			switch (shapetype) {
			case 'n':
				std::cout << "enter color, name,  rib for pentagram" << std::endl;
				std::cin >> col >> nam >> rad;
				pent.setColor(col);
				pent.setName(nam);
				pent.setRib(rad);
				ptrpent->draw();
				break;
			case 'h':
				std::cout << "enter color, name,  rib for hexagon" << std::endl;
				std::cin >> col >> nam >> rad;
				hex.setColor(col);
				hex.setName(nam);
				hex.setRib(rad);
				ptrhex->draw();
				break;
			case 'c':
				std::cout << "enter color, name,  rad for circle" << std::endl;
				std::cin >> col >> nam >> rad;
				circ.setColor(col);
				circ.setName(nam);
				circ.setRad(rad);
				ptrcirc->draw();
				break;
			case 'q':
				std::cout << "enter name, color, height, width" << std::endl;
				std::cin >> nam >> col >> height >> width;
				quad.setName(nam);
				quad.setColor(col);
				quad.setHeight(height);
				quad.setWidth(width);
				ptrquad->draw();
				break;
			case 'r':
				std::cout << "enter name, color, height, width" << std::endl;
				std::cin >> nam >> col >> height >> width;
				rec.setName(nam);
				rec.setColor(col);
				rec.setHeight(height);
				rec.setWidth(width);
				ptrrec->draw();
				break;
			case 'p':
				std::cout << "enter name, color, height, width, 2 angles" << std::endl;
				std::cin >> nam >> col >> height >> width >> ang >> ang2;
				para.setName(nam);
				para.setColor(col);
				para.setHeight(height);
				para.setWidth(width);
				para.setAngle(ang, ang2);
				ptrpara->draw();

			default:
				std::cout << "you have entered an invalid letter, please re-enter" << std::endl;
				break;
			}
			std::cout << "would you like to add more object press any key if not press x" << std::endl;
			if (std::cin.fail())
			{
				yeet InputError();
			}
			std::cin.get() >> x;
			
		}
		catch (const InputError& e) {
			CleanCin();
			print(e.what());
		}
		catch (const std::exception& e)
		{			
			printf(e.what());
		}
		catch (...)
		{
			printf("caught a bad exception. continuing as usual\n");
		}
	}



		system("pause");
		return 0;
	
}