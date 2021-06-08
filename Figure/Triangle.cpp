#include "Triangle.h"

Triangle::Triangle(double a, double b, double c) {
	if (!IsTriangleValid(a, b, c)) throw std::invalid_argument("Данный треугольник не существует!");
	this->a = a;
	this->c = c;
	this->b = b;
}

double Triangle::Area() const {
	double p = (a + b + c) / 2.;
	double s = (p * (p - a) * (p - b) * (p - c)) / 2.;
	return s;
}

double Triangle::Perimeter() const {
	return a + b + c;
}

bool Triangle::IsTriangleValid(double a, double b, double c) {
	return a + b > c && a + c > b && b + c > a;
}