#include "Liquid.h"

#include <iostream>

void Liquid::setName(const std::string& name) {
	this->name = name;
}

void Liquid::setDensity(double density) {
	this->density = density;
}

Liquid::Liquid(const std::string& name, double density) {
	if (density <= 0) {
		throw std::invalid_argument("Неверная плотность!");
	}

	if (name == "") {
		throw std::invalid_argument("Неверное название!");
	}

	setName(name);
	setDensity(density);
}

const std::string& Liquid::getName() const { return name; }
const double Liquid::getDensity() const { return density; }