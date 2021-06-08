#pragma once

#include <string>
#include <iostream>

class MyException2 : public std::invalid_argument {
	double side;
public:
	MyException2(const std::string& msg, double side);
	double getWrongSide() const;
};