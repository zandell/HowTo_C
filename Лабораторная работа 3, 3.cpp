#include "stdafx.h"
#include <iostream>
using namespace std;

float x;
float sum;

void math(){
	sum = x-(pow(x,3)/3)+(pow(x,5)/5);
	cout << sum;

}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Type x:";
	cin >> x;
	
	math();

		cin >> x;

	return 0;
}
