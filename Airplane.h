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

using namespace std;

class Airplane{
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
public:
	Airplane();
	Airplane(int, int , int , int , int , string);

	void print();
	int getCountUser();
	int getvelKreyser();
	int getrangeFlight();
	int getweightMaximum();
	int getflightAltitudeMax();
	string getname();

	bool operator== (const Airplane&);
	bool operator> (const Airplane&);
	bool operator< (const Airplane&);
	void operator++ ();
};

