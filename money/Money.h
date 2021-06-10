#pragma once

#include <math.h>
#include <string>
#include <iostream>
/*
* \btrief класс money
*/

class Money {
public:
	/*
	* \breif конструктор без параметров
	*/
	Money() {
		this->rubles = 0;
		this->penny = 0;
	}
	/*
	* \breif конструктор с параметрами
	*/

	Money(long rubles, unsigned char penny) {
		this->rubles = rubles;
		this->penny = penny;
	}
	/*
	* \breif перевод рублей в копейки
	*/
	long toPenny() const {
		return rubles * 100 + penny;
	}
	/*
	* 'breif вывод денег
	*/
	friend std::ostream& operator<<(std::ostream& os, const Money& money);
	/*
	* \breif перегруженные математические опреации
	*/
	friend Money operator+(const Money& first, const Money& second);
	friend Money operator-(const Money& first, const Money& second);
	friend double operator/(const Money& first, const Money& second);
	friend Money operator/(const Money& first, const double& d);
	friend Money operator*(const Money& first, const double& d);
	friend bool operator==(const Money& first, const Money& second);
	/*
	* \breif параметры класса
	*/
private:
	long rubles;
	unsigned char penny;
};