#include "Circle.h"

void Circle::set_radius(const double radius)
{
	if (radius > 0)
	{
		this->radius = radius;
	}
	else
	{
		throw invalid_argument{ "Неверный радиус" };
	}
}
Circle::Circle(const double radius)
{
	set_radius(radius);
}
double Circle::get_perimeter() 
{
	return 2 * PI * radius;
}
double Circle::get_area()
{
	return PI * radius * radius;
}
Circle::~Circle() {};
ostream& operator<<(ostream& out, Circle& circ)
{
	out <<"CIRCLE:\n" << "Perimeter = " << circ.get_perimeter() << endl;
	out << "Area = " << circ.get_area() << endl;
	return out;
}