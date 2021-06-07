#pragma once
#pragma once
#include "Geometric_figures.h"

class Circle :public Geometric_figures
{
private:
	void set_radius(const double radius);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Circle(const double radius);
	/**
	 \brief	получает периметр круга
	 */
	double get_perimeter() override;
	/**
	 \brief	получает площадь круга
	 */
	double get_area()override;
	/**
	 \brief	деструктор
	 */
	virtual ~Circle();
	/**
	 \brief	оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Circle& circ);
};

