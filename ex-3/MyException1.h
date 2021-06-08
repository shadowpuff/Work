#pragma once

#include <string>

class MyException1 {
	std::string msg;
public:
	MyException1(const std::string& s);
	const char* message() const;
};