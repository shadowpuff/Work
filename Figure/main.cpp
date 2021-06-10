#include <iostream>
#include <string>
#include <clocale>
#include <memory>
#include <Windows.h>

#include "Figure.h"
#include "MyRectangle.h"
#include "Circle.h"
#include "Triangle.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::unique_ptr<Figure> figure;

	int figureIndex;
	std::cout << "1. Круг\n2. Прямоугольник\n3. Треугольник" << std::endl;
	std::cout << "Выберите фигуру: ";
	std::cin >> figureIndex;

	if (figureIndex < 1 || figureIndex > 3) {
		std::cout << "Введён номер!" << std::endl;
		return -1;
	}


	switch (figureIndex) {
	case 1: {
		double radius;
		std::cout << "Введите радиус круга: ";
		std::cin >> radius;
		figure = std::make_unique<Circle>(Circle(radius));
		break;
	}
	case 2: {
		double width, height;
		std::cout << "Введите ширину прямуогольинка: ";
		std::cin >> width;
		std::cout << "Введите высоту прямуогольника: ";
		std::cin >> height;
		figure = std::make_unique<MyRectangle>(MyRectangle(width, height));
		break;
	}
	case 3: {
		double a, b, c;
		std::cout << "Введите длину стороны а: ";
		std::cin >> a;
		std::cout << "Введите длину стороны b: ";
		std::cin >> b;
		std::cout << "Введите длину стороны c: ";
		std::cin >> c;
		figure = std::make_unique<Triangle>(Triangle(a, b, c));
		break;
	}
	default: break;
	}

	std::cout << "Площадь фигуры = " << figure->Area() << std::endl;
	std::cout << "Периметер фигуры = " << figure->Perimeter() << std::endl;

	return 0;
}