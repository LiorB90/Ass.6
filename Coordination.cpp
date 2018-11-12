#include "Coordination.h"

Coordinate::Coordinate(const int x, const int y):
	m_i_x(x),m_i_y(y)
{
	
}

ostream & operator<<(ostream & out, const Coordinate & c)
{
	out << "("<< c.GetX() << "," << c.GetY() << ")" << endl;
	return out;
}
