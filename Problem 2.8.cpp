#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int A, B;
	cout << "What is your starting value? ";
	cin >> A;

	cout << "What is your ending value? ";
	cin >> B;

	int factorial = A;

	for (int i = A; i < B; ++i)
	{
		factorial *= i + 1;
	}

	cout << "The product is " << factorial << endl;

	return 0;
}