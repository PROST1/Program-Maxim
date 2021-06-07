#pragma once
#include "Geometric_figures.h"

class Rectangle:public Geometric_figures
{
private:
	void set_sides_rect(const double length, const double width);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Rectangle(const double length, const double width);
	/**
	 \brief	получает периметр прямоугольника
	 */
	double get_perimeter()override;
	/**
	 \brief	получает площадь прямоугольника
	 */
	double get_area()override;
	/**
	 \brief	Деструктор
	 */
	virtual ~Rectangle();
	/**
	 \brief	оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Rectangle& rect);
};

