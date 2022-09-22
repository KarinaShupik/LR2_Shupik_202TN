#pragma once
#include<iostream>
#include<string>

//Карина Шупик

//202ТН

/*Створити клас Point для роботи із точками на площині.Координати точки —
декартові.Обов'язково повинні бути реалізовані: переміщення точки по осі X,
переміщення по осі Y, визначення відстані до початку координат, відстані між
двома точками, перетворення в полярні координати, порівняння на збіг і
розбіжність.*/

class Point
{
public:
	int x, y;
	int x1, y1;
	Point Init(int x, int y);
	Point Read();
	void Display();
	char toString();

	//конструктори
	Point();
	Point(float valueX, float valueY);

	//перевантаження операцій порівняння, інкременту та декременту

	//префіксний інкремент
	Point& operator++ ();

	//префіксний декремент
	Point& operator-- ();

	//збіжність
	bool operator== (const Point& other);

	//розбіжність
	bool operator!= (const Point& other);

private:
	float distanceToStartCoordinate();
	float polarCoordinates();
	float transferX();
	float transferY();
};

