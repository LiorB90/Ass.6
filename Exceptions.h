#pragma once
#ifndef __EXCEPTIONS_H
#define __EXCEPTIONS_H

#include<iostream>
#include<string.h>
using namespace std;

class Exceptions
{
public:
	virtual void Print()const { cout << "Fail!\n"; }
};

class IllegalCoordinateException :
	public Exceptions
{
public:
	virtual void Print()const override { cout << "Error in Coordinations"; }
};

class IllegalCharException :
	public Exceptions
{
public:
	virtual void Print()const override { cout << "Wrong Charecter"; }
};

class IllegalSideException :
	public Exceptions
{
public:
	virtual void Print()const override { cout << "Size Too Small"; }
};

#endif // !__EXCEPTIONS_H


