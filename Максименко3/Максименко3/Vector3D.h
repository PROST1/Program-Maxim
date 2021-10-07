#pragma once
#include "Triad.h"

class Vector3D: public Triad
{
public:
	/**
	 \brief	Конструктор по умолчанию.
	 */
	Vector3D();
	/**
	 \brief	Конструктор с параметрами.
	 */
	explicit Vector3D(const int x, const int y, const int z);
	/**
	 \brief	Перегруженный оператор +.
	 */
	Vector3D operator+(const Vector3D& other);
	/**
	 \brief	Перегруженный оператор *.
	 */
	int operator*(const Vector3D& other);
	/**
	 \brief	Оператор сдвига.
	 */
	friend ostream& operator<<(ostream& out, const Vector3D& vec);
	/**
	 \brief	Получаем x.
	 */
	int get_x()const;
	/**
	 \brief	Получаем y.
	 */
	int get_y()const;
	/**
	 \brief	Получаем z.
	 */
	int get_z()const;
};

