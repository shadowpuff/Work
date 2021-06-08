#pragma once

#include "Figure.h"
#include <istream>

class Circle : public Figure {
public:
	Circle(double radius);
	double Area() const;
	double Perimeter() const;

private:
	double radius;
};