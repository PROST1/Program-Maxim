#pragma once
#include <iostream>
#include <string>
using namespace std;

class Goods
{
private:
	string name;
	string data;
	unsigned int price;
	unsigned int quantity;
	string invoice_number;
public:
	/**
	 \brief	Конструктор с параметрами.
	 */
	explicit Goods(const string& name, const string& data, const string& invoice_number, const unsigned int price, const unsigned int quantity);
	/**
	 \brief	Жеструктор по умолчанию.
	 */
	~Goods() = default;
	/**
	 \brief	Конструктор копирования.
	 */
	Goods(const  Goods&) = default;
	/**
	 \brief	Конструктор присваивания.
	 */
	Goods& operator=(const  Goods&) = default;
	/**
	 \brief	Оператор сдвига.
	 */
	friend ostream& operator<<(ostream& out, const Goods& gds);
	/**
	 \brief	Возвращает имя
	 \returns	name.
	 */
	string get_name() const;
	/**
	 \brief	Возвращает дату
	 \returns	data.
	 */
	string get_data() const;
	/**
	 \brief	Возвращает накладную
	 \returns	invoice_number.
	 */
	string get_invoice_number() const;
	/**
	 \brief	Возвращает цену
	 \returns	price.
	 */
	string get_price()const;
	/**
	 \brief	Возвращает количество
	 \returns	quantity.
	 */
	unsigned int get_quantity()const;
	/**
	 \brief	Принимает другую цену.
	 */
	void set_price(const unsigned int price);
	/**
	 \brief	Принимает увеличение товара.
	 */
	void set_increase_goods(const unsigned int quantity);
	/**
	 \brief	Принимает уменьшение товара.
	 */
	void set_reduse_goods(const unsigned int quantity);
};

