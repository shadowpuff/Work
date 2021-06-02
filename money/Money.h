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

bool operator==(const Money& first, const Money& second) {
	return first.rubles == second.rubles && first.penny == second.penny;
}

Money operator*(const Money& first, const double& d) {
	long total = (long)(double(first.toPenny()) * d);
	return Money(total / 100, total % 100);
}

Money operator/(const Money& first, const double& d) {
	if (d <= 0) throw std::invalid_argument("d <= 0");
	long total = (long)(double(first.toPenny()) / d);
	return Money(total / 100, total % 100);
}

double operator/(const Money& first, const Money& second) {
	if (second.penny == 0 && second.rubles == 0) throw std::invalid_argument("second == 0");
	return (double)(first.toPenny()) / (double)(second.toPenny());
}

Money operator+(const Money& first, const Money& second) {
	long total = first.toPenny() + second.toPenny();
	return Money(total / 100, total % 100);
}

Money operator-(const Money& first, const Money& second) {
	long dif = first.toPenny() - second.toPenny();
	if (dif < 0) {
		throw std::invalid_argument("first < second");
	}
	return Money(dif / 100, dif % 100);
}

std::ostream& operator<<(std::ostream& os, const Money& money) {
	os << money.rubles << "," << (int)money.penny;
	return os;
}