#pragma once

class MyException {};

class MyException1 {
	std::string msg;
public:
	MyException1(const std::string& s) {
		msg = s;
	}
	const char* message() const {
		return msg.c_str();
	}
};

class MyException2 : public std::invalid_argument {
	double side;
public:
	MyException2(const std::string& msg, double side)
		: std::invalid_argument(msg) {
		this->side = side;
	}
	double getWrongSide() const { return side; }
};

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
	return -1.;
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
	double side;
	if (a + b <= c) side = c;
	else if (b + c <= a) side = a;
	else side = b;
	throw MyException2("Такого треугольника не может быть!", side);
}