#pragma once

#include <math.h>
#include <string>
#include <iostream>

class Money {
public:
	Money() {
		this->rubles = 0;
		this->penny = 0;
	}

	Money(long rubles, unsigned char penny) {
		this->rubles = rubles;
		this->penny = penny;
	}

	long toPenny() const {
		return rubles * 100 + penny;
	}

	friend std::ostream& operator<<(std::ostream& os, const Money& money);
	friend Money operator+(const Money& first, const Money& second);
	friend Money operator-(const Money& first, const Money& second);
	friend double operator/(const Money& first, const Money& second);
	friend Money operator/(const Money& first, const double& d);
	friend Money operator*(const Money& first, const double& d);
	friend bool operator==(const Money& first, const Money& second);

	long rubles;
	unsigned char penny;
};