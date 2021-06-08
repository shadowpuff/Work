#pragma once

#include "Figure.h"
#include <iostream>

class Triangle : public Figure {
public:
	Triangle(double a, double b, double c);
	double Area() const;
	double Perimeter() const;

private:
	bool IsTriangleValid(double a, double b, double c);

	double a, b, c;
};