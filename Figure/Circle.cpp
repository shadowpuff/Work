#include "Circle.h"

Circle::Circle(double radius) {
	if (radius < 0) throw std::invalid_argument("Радиус < 0");
	this->radius = radius;
}

double Circle::Area() const {
	return 2. * M_PI * radius * radius;
}

double Circle::Perimeter() const {
	return 2. * M_PI * radius;
}