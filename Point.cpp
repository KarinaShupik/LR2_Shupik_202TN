#include"Point.h"
#include<iostream>
#include<math.h>
#include<string>

using namespace std;

Point Point::Init(int x, int y)
{
	Point tmp;
	tmp.x = x;
	tmp.y = y;
	return tmp;
}

Point Point::Read()
{
	//������� ��� x �� �
	Point tmp;
	cout << "Input first point x: " << endl;
	cin >> tmp.x;
	cout << "Input first point y: " << endl;
	cin >> tmp.y;

	return tmp;
}

void Point::Display()
{
	cout << "X:" << x << endl;
	cout << "Y:" << y << endl;


	cout << "Distance to origin (x, y):" << distanceToStartCoordinate() << endl;
	polarCoordinates();
	cout << "Moved Ox (x++):" << transferX() << endl;
	cout << "Moved Oy (y++):" << transferY() << endl;
}


float Point::distanceToStartCoordinate() //���������� ������ �� ������� ���������
{
	return sqrt(x * x + y * y);
}

char Point::toString() //������ �� ����� �������
{
	float x1;
	float y1;
	cout << "Enter second point x:" << endl;
	cin >> x1;
	cout << "Enter second point y:" << endl;
	cin >> y1;

	float distanceToP = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));
	string convertToString = to_string(distanceToP);
	cout << "Distance to point: " + convertToString << endl;

	//��������� �� ��� � ���������
	if (x == y && x1 == y1) {
		cout << "Dots match" << endl;
	}
	else {
		cout << "Dots don't match" << endl;
	}

	return 0;
}

float Point::polarCoordinates() //������������ � ������ ����������
{
	float r;//radius
	float phi;//angle

	r = sqrt(x * x + y * y);
	phi = tan(y / x);

	cout << "Polar coordinates (x, y):" << "(" << phi << "," << r << ")" << endl;

	return 0;
}

float Point::transferX() //���������� ����� �� �� X
{
	x++;
	return x;
}

float Point::transferY() //���������� ����� �� �� Y
{
	y++;
	return y;
}
