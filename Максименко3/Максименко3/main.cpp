#include "Triad.h"
#include "Vector3D.h"
int main()
{
	Triad a(1, 2, 3);
	Triad b(2, 2, 2);
	Triad c(a + b);
	Triad d(a * b);
	cout << d << endl;
	Vector3D A(2, 2, 2);
	cout << A * A << endl;
}