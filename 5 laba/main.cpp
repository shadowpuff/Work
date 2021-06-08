#include <iostream>
#include <string>
#include <clocale>
#include <Windows.h>

#include "Exceptions.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Func_1(4, 2, 3) = " << Func_1(4, 2, 3) << std::endl;

	try {
		std::cout << "Func_2(4, 1, 3) = " << Func_2(4, 1, 3) << std::endl;
	}
	catch (const char* e) {
		std::cout << e << std::endl;
	}

	try {
		std::cout << "Func_3(1, 2, 3) = " << Func_3(1, 2, 3) << std::endl;
	}
	catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "Func_4(1, 2, 3) = " << Func_4(1, 2, 3) << std::endl;
	}
	catch (MyException) {
		std::cout << "MyException!" << std::endl;
	}

	try {
		std::cout << "Func_5(1, 2, 3) = " << Func_5(1, 2, 3) << std::endl;
	}
	catch (MyException1 e) {
		std::cout << e.message() << std::endl;
	}

	try {
		std::cout << "Func_6(1, 2, 3) = " << Func_6(1, 2, 3) << std::endl;
	}
	catch (MyException2 e) {
		std::cout << e.what() << std::endl;
		std::cout << "Неправильная сторона = " << e.getWrongSide() << std::endl;
	}

	return 0;
}