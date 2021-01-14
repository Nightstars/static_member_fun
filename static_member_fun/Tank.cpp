#include "Tank.h"
#include <iostream>
using namespace std;

int Tank::s_iCount = 0;

Tank::Tank(char code)
{
	m_sCoce = code;
	s_iCount++;
	cout << "Tank" << endl;
}

Tank::~Tank()
{
	s_iCount--;
	cout << "~Tank" << endl;
}

void Tank::fire(Tank* tank)
{
	cout << "Tank--fire" << endl;
}

int Tank::getCount()
{
	return s_iCount;
}
