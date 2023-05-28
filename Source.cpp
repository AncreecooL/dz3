#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	int y = 0;

	char n = ' ';
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter operator (+, -, *, /,^,%): ";
	cin >> n;
	cout << "Enter second number: ";
	cin >> y;
	switch (n)
	{
	case '+': cout << "Result: " << x + y; break;
	case '-': cout << "Result: " << x - y; break;
	case '*': cout << "Result: " << x * y; break;
	case '/': cout << "Result: " << x / y; break;
	case '^': cout << "Result: " << x * x; break;
	case '%': cout << "Result: " << x % y; break;
	default: cout << "Wrong operator";
	}
}
