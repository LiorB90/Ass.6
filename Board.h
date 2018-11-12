#pragma once
#ifndef __BOARD_H
#define __BOARD_H

#include<iostream>
#include<string.h>
#include<fstream>
#include"Exceptions.h"
#include"Coordination.h"
#include"Move.h"

using namespace std;

class Board
{
public:
	Board(const int side= 3);
	Board(const Board& other);
	virtual ~Board();

	bool SetBoard(const int side);
	int GetSide()const { return m_i_side; }
	Move** GetBoard()const { return m_p_board; }

	Board& operator=(const Board& other);
	Board& operator=(const char c);
	bool operator==(const Board& other);
	bool operator!=(const Board& other);
	friend ostream& operator<<(ostream& out, const Board& b);
	void PrintBoard(ostream& out)const;
	Move& operator[](Coordinate c);
	Move operator[](Coordinate c) const;




private:
	int m_i_side;
	Move** m_p_board;
};

#endif // !__BOARD_H


