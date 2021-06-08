#include "MyException1.h"

MyException1::MyException1(const std::string& s) {
	msg = s;
}
const char* MyException1::message() const {
	return msg.c_str();
}