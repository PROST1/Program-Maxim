#include "Triad.h"
#include "Vector3D.h"

Vector3D::Vector3D()
{
	x = 0;
	y = 0;
	z = 0;
}
Vector3D::Vector3D(const int x, const int y, const int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
} 
Vector3D Vector3D:: operator+(const Vector3D& other)
{
	Vector3D temp;
	temp.x = this->x + other.x;
	temp.y = this->y + other.y;
	temp.z = this->z + other.z;
	return temp;
}
int Vector3D::operator*(const Vector3D& other)
{
	return this->x * other.x + this->y * other.y + this->z * other.z;
}
ostream& operator<<(ostream& out, const Vector3D& vec)
{
	out << "x = " << vec.x << endl;
	out << "y = " << vec.y << endl;
	out << "z = " << vec.z << endl;
	return out;
}
int Vector3D::get_x()const
{
	return x;
}
int Vector3D::get_y()const
{
	return y;
}
int Vector3D::get_z()const
{
	return z;
}