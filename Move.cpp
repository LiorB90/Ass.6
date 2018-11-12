#include "Move.h"

Move::Move(const char sign)
{
	SetSign(sign);
}

bool Move::SetSign(const char sign)
{
	if (sign != 'X' && sign != 'O' && sign != '.')
	{
		throw IllegalCharException();
		return false;
	}
	m_c_sign = sign;
	return true;
}

Move & Move::operator=(const char sign)
{
	if (sign != 'X' &&sign != 'O'&&sign != '.')
		throw IllegalCharException();
	SetSign(sign);
	return *this;
}

Move & Move::operator=(const Move & other)
{
	SetSign(other.GetSign());
	return *this;
}

bool Move::operator==(const Move & other)
{
	return(GetSign() == other.GetSign());
}

bool Move::operator!=(const Move & other)
{
	return!(*this == other);
}

bool Move::operator==(const char other)
{
	return GetSign() == other;
}

bool Move::operator!=(const char other)
{
	return !(*this == other);
}

ostream & operator<<(ostream & out, const Move & m)
{
	out << "Sign: " << m.GetSign() << endl;
	return out;
}
