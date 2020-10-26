#include "stdafx.h"
#include <iostream>
using namespace std;

float a;
float b;
float c;
float d;
float sum;

void math(){
	sum = (a / c)*(b / d) - (a*b - c / (c*d));
	cout << sum;

}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Type a:";
	cin >> a;
	cout << "Type b:";
	cin >> b;
	cout << "Type c:";
	cin >> c;
	cout << "Type d:";
	cin >> d;

	math();

		cin >> a;

	return 0;
}
