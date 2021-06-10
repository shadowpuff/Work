#include "MyRectangle.h"

MyRectangle::MyRectangle(double width, double height) {
	if (width < 0. || height < 0.) throw std::invalid_argument("Стороны прямуогольника не могут иметь отрицательную длину!");
	this->width = width;
	this->height = height;
}

double MyRectangle::Area() const {
	return width * height;
}

double MyRectangle::Perimeter() const {
	return 2.0 * width + 2.0 * height;
}
