#include "Triad.h"

int Triad::get_x()const
{
	return x;
}
int Triad::get_y()const
{
	return y;
}
int Triad::get_z()const
{
	return z;
}
Triad::Triad()
{
	x = 0;
	y = 0;
	z = 0;
}
Triad::Triad(const int x, const int y, const int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Triad Triad::operator+(const Triad& other)
{
	return Triad (this->x + other.x, this->y + other.y, this->z + other.z);
}
Triad Triad::operator*(const Triad& other)
{
	return Triad (this->x * other.x, this->y * other.y, this->z * other.z);
}
bool Triad::operator==(const Triad& other)
{
return abs(this->x - other.x + this->y - other.y + this->z - other.z) < std::numeric_limits<double>::epsilon();
}
ostream& operator<<(ostream& out, const Triad& tr)
{
	out << "x = " << tr.x << endl;
	out << "y = " << tr.y << endl;
	out << "z = " << tr.z << endl;
	return out;
}