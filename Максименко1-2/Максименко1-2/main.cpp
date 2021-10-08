#include "Goods.h"

int main()
{
	string name = "Watermelon";
	string data = "11.05.2021";
	string invoice_number = "159641564651";
	Goods a(name,data, invoice_number, 100, 500);
	a.set_reduse_goods(200);
	cout << a.get_quantity() << endl;
	cout << a << endl;
}