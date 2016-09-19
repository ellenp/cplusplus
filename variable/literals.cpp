#include <iostream>

using namespace std;

int main()
{
	int x;
	x = 10;   cout << x << endl; // decimal
	x = 010;  cout << x << endl; // octal
	x = 0x10; cout << x << endl; // hex
	x = 0X10; cout << x << endl; // hex
	x = 0XaA; cout << x << endl; // hex supports upper or lower cases
	x = 0b10; cout << x << endl; // binary
	cout << endl;

	double y;
	y = 23.78e3; cout << y << endl;
	y = 23.78e-3; cout << y << endl;
	cout << endl;

	bool a = true; cout << a << endl;
	bool b = false; cout << b << endl;
	int * c = NULL; cout << c << endl;

	return 0;
}
