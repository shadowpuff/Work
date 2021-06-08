#include "MyException2.h"

MyException2::MyException2(const std::string& msg, double side)
	: std::invalid_argument(msg) {
	this->side = side;
}
double MyException2::getWrongSide() const { return side; }