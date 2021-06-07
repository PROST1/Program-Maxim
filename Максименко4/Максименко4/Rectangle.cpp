#include "Rectangle.h"

void Rectangle::set_sides_rect(double length, double width)
{
	if (length > 0 && width > 0)
	{
		this->length = length;
		this->width = width;
	}
	else
	{
		throw invalid_argument{ "Неверные стороны" };
	}
}
Rectangle::Rectangle(const double length, const double width)
{
	set_sides_rect(length, width);
}
double Rectangle::get_perimeter()
{
	return length * 2 + width * 2;
}
double Rectangle::get_area()
{
	return length * width;
}
Rectangle::~Rectangle() {};
ostream& operator<<(ostream& out, Rectangle& rect)
{
	out << "RECTANGLE:\n" << "Perimeter = " << rect.get_perimeter() << endl;
	out << "Area = " << rect.get_area() << endl;
	return out;
}