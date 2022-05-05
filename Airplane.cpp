#include "Airplane.h"
#include <string>
#include <iostream>

using namespace std;


Airplane::Airplane() {
	countUser = 0;
	velKreyser = 0;
	rangeFlight = 0;
	weightMaximum = 0;
	flightAltitudeMax = 0;
	name = "";
	passengerBoard(0);
}

Airplane::Airplane(int countUser, int velKreyser, int rangeFlight,
	int weightMaximum, int flightAltitudeMax, string name) {
	this->countUser = countUser;
	this->velKreyser = velKreyser;
	this->rangeFlight = rangeFlight;
	this->weightMaximum = weightMaximum;
	this->flightAltitudeMax = flightAltitudeMax;
	this->name = name;
	passengerBoard(0);
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
	cout << "������ ��������: " << name << endl;
	cout << "����� ����: " << countUser << endl;
	cout << "����������� ��������: " << velKreyser << endl;
	cout << "��������� ������: " << rangeFlight << endl;
	cout << "������������ �������� �����: " << weightMaximum << endl;
	cout << "������������ ������ ������: " << flightAltitudeMax << endl;
}


bool Airplane::operator== (const Airplane& aira) {
	if (name == aira.name) {
		return true;
	}
	else {
		return false;
	}
}

bool Airplane::operator> (const Airplane& aira) {
	if (countUser > aira.countUser) {
		return true;
	}
	else {
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

Airplane Airplane::operator& (Airplane const& second) {
	this->countUser = second.countUser;
	this->flightAltitudeMax = second.flightAltitudeMax;
	this->name = second.name;
	this->rangeFlight = second.rangeFlight;
	this->velKreyser = second.velKreyser;
	this->weightMaximum = second.weightMaximum;
	return *this;
}


/// <summary>
/// ������� ������ ��������� � ��������� ���
/// </summary>
/// <param name="count">���������� ����������</param>
void Airplane::passengerBoard(int count) {	
	if (count != 0) {
		// ��������� ����� ���������� ���������� ���� �� ������ ��� �����������
		passengerCount = (count <= countUser) ? count : countUser;
		parrayPass = new Passenger[passengerCount];
		for (int i = 0; i < passengerCount; i++) {
			parrayPass[i].setName("Name ");
			parrayPass[i].setAge("age ");
			parrayPass[i].setWieght("wiegth ");
			parrayPass[i].setBaggage(1);
		}
	}
}

void Airplane::printPassenger() {
	for (int i = 0; i < passengerCount; i++) {
		parrayPass[i].print();
	}
}
