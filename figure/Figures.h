#pragma once

#define _USE_MATH_DEFINES
#include <math.h>

class Figure {
public:
	virtual double Area() const = 0;
	virtual double Perimeter() const = 0;
};

class Circle : public Figure {
public:
	Circle(double radius) {
		this->radius = radius;
	}

	double Area() const {
		return 2. * M_PI * radius * radius;
	}

	double Perimeter() const {
		return 2. * M_PI * radius;
	}
private:
	double radius;
};

class MyRectangle : public Figure {
public:
	MyRectangle(double width, double height) {
		this->width = width;
		this->height = height;
	}

	double Area() const {
		return width * height;
	}

	double Perimeter() const {
		return 2.0 * width + 2.0 * height;
	}

private:
	double width, height;
};

class Triangle : public Figure {
public:
	Triangle(double a, double b, double c) {
		this->a = a;
		this->c = c;
		this->b = b;
	}

	double Area() const {
		double p = (a + b + c) / 2.;
		double s = (p * (p - a) * (p - b) * (p - c)) / 2.;
		return s;
	}

	double Perimeter() const {
		return a + b + c;
	}

private:
	double a, b, c;
};