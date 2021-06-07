#include "Triangle.h"

void Triangle::set_sides_triang(const double a, const double b, const double c)
{
	if ((a > 0 && b > 0 && c > 0) && (a > abs(b - c) && a < b + c) && (b > abs(a - c) && b < a + c) && (c > abs(b - c) && c < b + c))
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	else
	{
		throw invalid_argument{ "Неверные стороны" };
	}
}
Triangle::Triangle(const double a, const double b, const double c)
{
	set_sides_triang(a, b, c);
}
double Triangle::get_perimeter()
{
	return a + b + c;
}
double Triangle::get_area()
{
	double p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
Triangle::~Triangle() {};
ostream& operator<<(ostream& out, Triangle& trian)
{
	out << "TRIANGLE:\n" << "Perimeter = " << trian.get_perimeter() << endl;
	out << "Area = " << trian.get_area() << endl;
	return out;
}