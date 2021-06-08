#include <iostream>
#include <string>
#include <clocale>
#include <Windows.h>

#include "Liquid.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Alcohol alcohol(10);
	std::cout << "Название жидкости: " << alcohol.getName() << std::endl;
	std::cout << "Плотность жидкости: " << alcohol.getDensity() << std::endl;
	std::cout << "Крепкость алкоголя: " << alcohol.getStrength() << std::endl;

	return 0;
}