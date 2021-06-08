#include "Alcohol.h"

Alcohol::Alcohol(double strength)
	: Liquid("Алкоголь", AlchololDensity) {
	this->strength = strength;
}

double Alcohol::getStrength() const {
	return strength;
}

void Alcohol::setStrength(double strength) {
	this->strength = strength;
}

const double Alcohol::AlchololDensity = 789.;