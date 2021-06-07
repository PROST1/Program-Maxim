#include "Goods.h"

string Goods::get_name() const
{
	return name;
}
string Goods::get_data() const
{
	return data;
}
string Goods::get_invoice_number() const
{
	return invoice_number;
}
string Goods::get_price()const
{
	return to_string(price);
}
unsigned int Goods::get_quantity()const
{
	return quantity;
}
void Goods::set_price(const unsigned int price)
{
	this->price = price;
}
void Goods::set_increase_goods(const unsigned int quantity)
{
	this->quantity += quantity;
}
void Goods::set_reduse_goods(const unsigned int quantity)
{
	if (this->quantity >= quantity)
	{
		this->quantity -= quantity;
	}
	else
	{
		throw invalid_argument{ "“овара уменьшилось больше, чем есть на складе" };
	}
}
ostream& operator<<(ostream& out, const Goods& gds)
{
	out << "Name: " << gds.name << endl;
	out << "Data: " << gds.data << endl;
	out << "Invoice number: " << gds.invoice_number << endl;
	out << "Price = " << gds.price << " RUB " << endl;
	out << "Quantity = " << gds.quantity << " pcs. " << endl;
	return out;
}
Goods::Goods(const string& name, const string& data, const string& invoice_number, const unsigned int price, const unsigned int quantity)
{
	this->name = name;
	this->data = data;
	this->invoice_number = invoice_number;
	this->price = price;
	this->quantity = quantity;
}