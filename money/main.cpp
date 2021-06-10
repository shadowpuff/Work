#include <iostream>
#include <string>
#include <clocale>
#include <Windows.h>

#include "Money.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	long v = -1;
	std::cout << v << std::endl;

	Money first(1, 50);
	Money second(1, 50);
	Money sum = first + second;
	std::cout << first << " + " << second << sum << std::endl;

	Money first1(1, 90);
	Money second1(2, 11);
	Money sum1 = first1 + second1;
	std::cout << first1 << " + " << second1 << " = " << sum1 << std::endl;

	std::cout << first1 << " / " << second1 << " = " << first1 / second1 << std::endl;
	std::cout << first1 << " / " << 2.0 << " = " << first1 / 2.0 << std::endl;
	std::cout << first1 << " * " << 1.5 << " = " << first1 * 1.5 << std::endl;
	std::cout << first << " == " << second << "? " << (first == second) << std::endl;

	Money first2(2, 11);
	Money second2(1, 99);
	Money dif1 = first2 - second2;
	std::cout << first2 << " - " << second2 << " = " << dif1 << std::endl;

	return 0;
}