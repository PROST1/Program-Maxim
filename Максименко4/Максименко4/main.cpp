#include "Geometric_figures.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
	Circle cir(5);
	cout << cir << endl;
	Rectangle rec(5, 5);
	cout << rec << endl;
	Triangle tr(3, 4, 5);
	cout << tr << endl;
}