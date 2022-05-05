/*
Создать класс Airplane (самолет)
С помощью перегрузки операторов реализовать:
■ Проверка на равенство типов самолетов (операция = =)
■ Увеличение и уменьшение пассажиров в салоне самолета
(операции ++ и - - в префиксной форме)
■ Сравнение двух самолетов по максимально возможному ко-
личеству пассажиров на борту (операция>)
создать отдельный класс пассажир
Для класса самолет реализовать массив пассажиров
*/

#include <iostream>
#include "Airplane.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    Airplane model1(180, 360, 7000, 42000, 11000, "AIROBUS");
    Airplane model2(380, 360, 7000, 42000, 11000, "AIROBUS");

    model1.print();
    model2.print();

    if (model1 == model2) {
        cout << "Модели одинаковы" << endl;
    }
    else {
        cout << "Модели не одинаковы" << endl;
    }

    if (model1 > model2) {
        cout << "Модели " << model1.getname()  << " вмещает больше чем "<< model2.getname() << endl;
    }
    if (model1 < model2) {
        cout << "Модели " << model1.getname() << " вмещает меньше чем " << model2.getname() << endl;
    }

    model1++;
    //model1.print();
}
