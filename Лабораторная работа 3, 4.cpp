#include "stdafx.h"
#include <iostream>
using namespace std;

float x;
float y;
float sum;

void math(){
	sum = (sin(x)+cos(y))/(cos(x) - sin(y))*tan(x*y);
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
