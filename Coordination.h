#pragma once
#ifndef __COORDINATE_H
#define __COORDINATE_H

#include<iostream>
#include<string.h>
using namespace std;

class Coordinate
{
public:
	Coordinate(const int x, const int y);

	friend ostream& operator<<(ostream& out, const Coordinate& c);
	int GetX()const { return m_i_x; }
	int GetY()const { return m_i_y; }

private:
	int m_i_x;
	int m_i_y;
};
#endif // !__COORDINATE_H



