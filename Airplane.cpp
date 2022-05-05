#include "Airplane.h"
#include<string>
#include <iostream>

using namespace std;

Airplane::Airplane() {
	countUser = 0;
	velKreyser = 0;
	rangeFlight = 0;
	weightMaximum = 0;
	flightAltitudeMax = 0;
	name = "";
}

Airplane::Airplane(int countUser, int velKreyser, int rangeFlight,
				   int weightMaximum, int flightAltitudeMax, string name) {
	this->countUser = countUser;
	this->velKreyser = velKreyser;
	this->rangeFlight = rangeFlight;
	this->weightMaximum = weightMaximum;
	this->flightAltitudeMax = flightAltitudeMax;
	this->name = name;
}

int Airplane::getCountUser() {
	return this->countUser;
};
int Airplane::getvelKreyser() {
	return this->velKreyser;
};
int Airplane::getrangeFlight() {
	return this->rangeFlight;
};
int Airplane::getweightMaximum() {
	return this->weightMaximum;
};
int Airplane::getflightAltitudeMax() {
	return this->flightAltitudeMax;
};
string Airplane::getname() {
	return this->name;
};


void Airplane::print() {
	cout << "Модель самолета: " << name << endl;
	cout << "Число мест: " << countUser << endl;
	cout << "Крейсерская скорость: " << velKreyser << endl;
	cout << "Дальность полета: " << rangeFlight << endl;
	cout << "Максимальная взлетная масса: " << weightMaximum << endl;
	cout << "Макисмлаьная высота полета: " << flightAltitudeMax << endl;
}

bool Airplane::operator==(const Airplane &aira) {
	if (name == aira.name) {
		return true;
	} else {
		return false;
	}
}

bool Airplane::operator> (const Airplane &aira) {
	if (countUser > aira.countUser) {
		return true;
	} else {
		return false;
	}
}

bool Airplane::operator< (const Airplane& aira) {
	if (countUser < aira.countUser) {
		return true;
	}
	else {
		return false;
	}
}

void Airplane::operator++ () {
	this->countUser += 10;
}