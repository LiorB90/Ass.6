#pragma once
#ifndef __Move_H
#define __Move_H
#include<iostream>
#include<string.h>
#include"Exceptions.h"
using namespace std;

class Move
{
public:
	Move(const char sign = '.');

	bool SetSign(const char sign);
	char GetSign()const { return m_c_sign; }

	Move& operator=(const char sign);
	Move& operator=(const Move& other);

	operator char() const { return m_c_sign; }
	bool operator==(const Move& other);
	bool operator!=(const Move& other);
	bool operator==(const char other);
	bool operator!=(const char other);
	friend ostream& operator<<(ostream& out, const Move& m);
private:
	char m_c_sign;
};


#endif // !__Move_H

