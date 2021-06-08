#include <iostream>
#include <string>
#include <clocale>
#include <Windows.h>

#include "Figures.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Figure* figure = nullptr;

	int figureIndex;
	std::cout << "1. ����\n2. �������������\n3. �����������" << std::endl;
	std::cout << "�������� ������: ";
	std::cin >> figureIndex;

	if (figureIndex < 1 || figureIndex > 3) {
		std::cout << "����� �����!" << std::endl;
		return -1;
	}

	if (figureIndex == 1) {
		double radius;
		std::cout << "������� ������ �����: ";
		std::cin >> radius;
		figure = new Circle(radius);
	}
	else if (figureIndex == 2) {
		double width, height;
		std::cout << "������� ������ ��������������: ";
		std::cin >> width;
		std::cout << "������� ������ ��������������: ";
		std::cin >> height;
		figure = new MyRectangle(width, height);
	}
	else {
		double a, b, c;
		std::cout << "������� ����� ������� �: ";
		std::cin >> a;
		std::cout << "������� ����� ������� b: ";
		std::cin >> b;
		std::cout << "������� ����� ������� c: ";
		std::cin >> c;
		figure = new Triangle(a, b, c);
	}

	std::cout << "������� ������ = " << figure->Area() << std::endl;
	std::cout << "��������� ������ = " << figure->Perimeter() << std::endl;

	delete figure;

	return 0;
}