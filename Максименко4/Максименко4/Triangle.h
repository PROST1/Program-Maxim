#pragma once
#include "Geometric_figures.h"

class Triangle :public Geometric_figures
{
private:
	void set_sides_triang(const double a, const double b, const double c);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Triangle(const double a, const double b, const double c);
	/**
	 \brief	получает периметр треугольника
	 */
	double get_perimeter()override;
	/**
	 \brief	получает площадь треугольника
	 */
	double get_area()override;
	/**
	 \brief	Деструктор
	 */
	virtual ~Triangle();
	/**
	 \brief	оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Triangle& trian);
};

