#pragma once

#include "MyExcpetion.h"
#include "MyException1.h"
#include "MyException2.h"

bool IsTriangleValid(double a, double b, double c) {
	return a + b > c && a + c > b && b + c > a;
}

double TrianglePerimeter(double a, double b, double c) {
	return a + b + c;
}

double Func_1(double a, double b, double c) {
	if (IsTriangleValid(a, b, c)) {
		return TrianglePerimeter(a, b, c);
	}
	throw "-1";
}

double Func_2(double a, double b, double c) {
	if (IsTriangleValid(a, b, c)) {
		return TrianglePerimeter(a, b, c);
	}
	throw "Такого треугольника не может быть!";
}

double Func_3(double a, double b, double c) {
	if (IsTriangleValid(a, b, c)) {
		return TrianglePerimeter(a, b, c);
	}
	throw std::invalid_argument("Такого треугольника не может быть!");
}

double Func_4(double a, double b, double c) {
	if (IsTriangleValid(a, b, c)) {
		return TrianglePerimeter(a, b, c);
	}
	throw MyException();
}

double Func_5(double a, double b, double c) {
	if (IsTriangleValid(a, b, c)) {
		return TrianglePerimeter(a, b, c);
	}
	throw MyException1("Такого треугольника не может быть!");
}

double Func_6(double a, double b, double c) {
	if (IsTriangleValid(a, b, c)) {
		return TrianglePerimeter(a, b, c);
	}
	throw MyException2("Такого треугольника не может быть!", a);
}