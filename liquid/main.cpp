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
	std::cout << "�������� ��������: " << alcohol.getName() << std::endl;
	std::cout << "��������� ��������: " << alcohol.getDensity() << std::endl;
	std::cout << "��������� ��������: " << alcohol.getStrength() << std::endl;

	return 0;
}