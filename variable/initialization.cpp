#include <iostream>

using namespace std;

int main()
{
	int a;             // declaration
	a = 5;             // initialization
	int b = 4;         // c-like initialization
	int c(3);          // constructor initialization
	int d{2};          // uniform initialization

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;

	return 0;
}
