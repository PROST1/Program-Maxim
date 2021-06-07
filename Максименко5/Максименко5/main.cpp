#include "Seconds.h"
using namespace std;

int main()
{
	cout << seconds(5, 10) << endl;
	try
	{
		seconds2(10, -5);
		seconds3(10, -5);
		seconds4(10, -5);
		seconds5(10, -5);
		seconds6(10, -5);
	}
	catch (int) {
		cout << "Error! Minutes/hours less than zero, throw specifier" << endl;
	}
	catch (invalid_argument error) {
		cerr << error.what() << endl;
	}
	catch (empty_class) {
		cerr << "Error! Minutes/hours less than zero, empty class" << endl;
	}
	catch (independent_class error) {
		cerr << error.message << endl;
	}
	catch (successor_class error) {
		cerr << error.what() << endl;
	}
}