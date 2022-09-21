#pragma once
#include<iostream>
#include<string>

class Point
{
public:
	int x, y;
	int x1, y1;
	Point Init(int x, int y);
	Point Read();
	void Display();
	char toString();

private:
	float distanceToStartCoordinate();
	float polarCoordinates();
	float transferX();
	float transferY();
};
