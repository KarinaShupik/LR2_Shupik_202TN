#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

int main()
{
	Point myObj;
	myObj = myObj.Init(2, 6);
	myObj.Display();
	myObj.toString();

	system("PAUSE");
}

