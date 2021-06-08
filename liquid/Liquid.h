#pragma once

#include <math.h>
#include <string>

class Liquid {
private:
	std::string name;
	size_t density; // kg/m^3
public:
	Liquid(const std::string name, size_t density) {
		this->name = name;
		this->density = density;
	}

	const std::string& getName() const { return name; }
	const size_t getDensity() const { return density; }

	void setName(const std::string& name) {
		this->name = name;
	}

	void setDensity(size_t density) {
		this->density = density;
	}
};

class Alcohol : public Liquid {
public:
	Alcohol(size_t strength)
		: Liquid("Алкоголь", 789) {
		this->strength = strength;
	}

	size_t getStrength() const {
		return strength;
	}

	size_t setStrength(size_t strength) {
		this->strength = strength;
	}

private:
	size_t strength;
};