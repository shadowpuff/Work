#pragma once

#include <cmath>
const double M_PI = 3.141592653589793238463;

class Figure {
public:
	virtual double Area() const = 0;
	virtual double Perimeter() const = 0;
	virtual ~Figure() {}
};