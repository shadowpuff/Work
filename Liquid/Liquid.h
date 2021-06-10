#pragma once

#include <cmath>
#include <string>
/*
* \breif родительский класс жидкость
*/
class Liquid {
public:
	/*
	* \breif конструктор с параметрами
	*/
	Liquid(const std::string& name, double density);
	/*
	* \breif геттеры для названия и плотности
	*/
	const std::string& getName() const;
	const double getDensity() const;

private:
	/*
	* \breif параметры класса
	*/
	std::string name;
	double density; // kg/m^3
	/*
	* \breif сеттеры для параметров
	*/
protected:
	void setName(const std::string& name);
	void setDensity(double density);
};