#include "MathUtils.h"
#include <iostream>
double MathUtils::CalPentagonArea(double rib)
{
    return 5*rib*rib;
}

double MathUtils::CalHexagonArea(double rib)
{
    return (3 * (sqrt(3) * (rib * rib))) / 2;
}
