#pragma once

#include <cmath>
#include <string>

class Liquid {
public:
	Liquid(const std::string& name, double density);

	const std::string& getName() const;
	const double getDensity() const;

private:
	std::string name;
	double density; // kg/m^3

	void setName(const std::string& name);
	void setDensity(double density);
};