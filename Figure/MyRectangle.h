#pragma once

#include "Figure.h"
#include <iostream>

class MyRectangle : public Figure {
public:
	MyRectangle(double width, double height);
	double Area() const;
	double Perimeter() const;

private:
	double width, height;
};