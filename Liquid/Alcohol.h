#pragma once

#include "Liquid.h"

class Alcohol : public Liquid {
public:
	Alcohol(double strength);
	double getStrength() const;
	void setStrength(double strength);

private:
	static const double AlchololDensity;
	double strength;
};