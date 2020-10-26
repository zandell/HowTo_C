#include "stdafx.h"
#include <iostream>
using namespace std;

float x;
float y;
float sum;

void math(){
	sum =((x + y)/(y + 1))-((x*y-12)/(34 + x));
	cout << sum;

}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Type x:";
	cin >> x;
	cout << "Type y:";
	cin >> y;


	math();

		cin >> x;

	return 0;
}
