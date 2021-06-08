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
	std::cout << "1. Круг\n2. Прямоугольник\n3. Треугольник" << std::endl;
	std::cout << "Выберите фигуру: ";
	std::cin >> figureIndex;

	if (figureIndex < 1 || figureIndex > 3) {
		std::cout << "Введён номер!" << std::endl;
		return -1;
	}

	if (figureIndex == 1) {
		double radius;
		std::cout << "Введите радиус круга: ";
		std::cin >> radius;
		figure = new Circle(radius);
	}
	else if (figureIndex == 2) {
		double width, height;
		std::cout << "Введите ширину прямуогольинка: ";
		std::cin >> width;
		std::cout << "Введите высоту прямуогольника: ";
		std::cin >> height;
		figure = new MyRectangle(width, height);
	}
	else {
		double a, b, c;
		std::cout << "Введите длину стороны а: ";
		std::cin >> a;
		std::cout << "Введите длину стороны b: ";
		std::cin >> b;
		std::cout << "Введите длину стороны c: ";
		std::cin >> c;
		figure = new Triangle(a, b, c);
	}

	std::cout << "Площадь фигуры = " << figure->Area() << std::endl;
	std::cout << "Периметер фигуры = " << figure->Perimeter() << std::endl;

	delete figure;

	return 0;
}