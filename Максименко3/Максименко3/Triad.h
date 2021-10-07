#pragma once
#include <iostream>
using namespace std;

class Triad
{
protected:
	int x;
	int y;
	int z;
public:
	/**
	 \brief	Конструктор по умолчанию.
	 */
	Triad();
	/**
	 \brief	Конструктор с параметрами.
	 */
	explicit Triad(const int x, const int y, const int z);
	/**
	 \brief	Деструктор по умолчанию.
	 */
	~Triad() = default;
	 /**
	 \brief	Оператор сдвига.
	 */
	friend ostream& operator<<(ostream& out, const Triad& tr);
	/**
	 \brief	Перегруженный оператор +.
	 */
	Triad operator+(const Triad& other);
	/**
	 \brief	Перегруженный оператор *.
	 */
	Triad operator*(const Triad& other);
	/**
	 \brief	Перегруженный оператор сравнения.
	 */
	bool operator==(const Triad& other);
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
