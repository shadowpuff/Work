#pragma once

#include "Liquid.h"
/*
* \breif класс наследник Алкоголь
*/
class Alcohol : public Liquid {
public:
	/*
	* \breif конструктор с параметрами
	*/
	Alcohol(double strength);
	/*
	* \breif геттер и сеттер плотности
	*/
	double getStrength() const;
	void setStrength(double strength);

private:
	/*
	* \breif параметры класса
	*/
	static const double AlchololDensity;
	double strength;
};