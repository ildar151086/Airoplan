/*
Создать класс Airplane (самолет)
С помощью перегрузки операторов реализовать:
■ Проверка на равенство типов самолетов (операция = =)
■ Увеличение и уменьшение пассажиров в салоне самолета
(операции ++ и - - в префиксной форме)
■ Сравнение двух самолетов по максимально возможному ко-
личеству пассажиров на борт	у (операция>)
создать отдельный класс пассажир
Для класса самолет реализовать массив пассажиров
*/
#include<string>
#include <iostream>

using namespace std;

int const STEP_COUNT = 10;

class Passenger {
	string name;
	string age;
	string wieght;
	bool baggage;// есть багаж или нет
public:
	Passenger() {
		name = "";
		age = "";
		wieght = "";
		baggage = false;
	}
	Passenger(string name, string age, string wieght, bool baggage) {
		this->name = name;
		this->age = age;
		this->wieght = wieght;
		this->baggage = false;
	}
	string getName() {
		return name;
	}
	string getAge() {
		return age;
	}
	string getWieght() {
		return wieght;
	}
	bool getBaggage() {
		return baggage;
	}
	void setName(string value) {
		name = value;
	}
	void setAge(string value) {
		age = value;
	}
	void setWieght(string value) {
		wieght = value;
	}
	void setBaggage(bool value) {
		baggage = value;
	}
	void print() {
		cout << getName() << endl;
		cout << getAge() << endl;
		cout << getWieght() << endl;
		cout << getBaggage() << endl;
	}

};

class Airplane {
	/// Число мест
	int countUser;
	/// Крейсерская скорость км/с
	int velKreyser;
	/// Дальность полета км
	int rangeFlight;
	/// Максимальная взлетная масса кг
	int weightMaximum;
	/// Максимальная высота полета м
	int flightAltitudeMax;
	/// Модель самолета
	string name;
	/// Массив для хранения пассажиров 
	Passenger* parrayPass;
	/// Количество пассажиров
	int passengerCount;
public:
	Airplane();
	Airplane(int, int, int, int, int, string);


	int getCountUser();
	int getvelKreyser();
	int getrangeFlight();
	int getweightMaximum();
	int getflightAltitudeMax();
	string getname();
	
	void print();
	void passengerBoard(int count);
	void printPassenger();
	
	Airplane operator& (Airplane const& second);
	bool operator==(const Airplane& aira);
	bool operator> (const Airplane& aira);
	bool operator< (const Airplane& aira);
	Airplane& operator++ () {
		this->countUser += STEP_COUNT;
		return *this;
	}
	Airplane& operator-- () {
		this->countUser -= STEP_COUNT;
		return *this;
	}

	~Airplane() {
		if (passengerCount != 0) {
			delete[] parrayPass;
		}
	}
};



