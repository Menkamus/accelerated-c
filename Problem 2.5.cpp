#include <iostream>
#include <string>

using std::cin; 
using std::endl;
using std::cout;
using std::string;

int main()
{
	// Drawing a square

	cout << "What length square sides? ";
	int square;
	cin >> square;
	cout << endl;

	string squareB(square, '*');
	string squareS((square - 2), ' ');

	for (int i = 0; i < square; ++i)
	{
		if (i == 0 || i == square - 1)
		{
			cout << squareB << endl;
		}
		else
		{
			cout << "*" << squareS << "*" << endl;
		}
	}

	// Drawing a rectangle

	cout << "\nWhat height rectangle? ";
	int rectHeight;
	cin >> rectHeight;
	cout << endl;

	cout << "What width rectangle? ";
	int rectWidth;
	cin >> rectWidth;
	cout << endl;

	string rectWB(rectWidth, '*');
	string rectWS(rectWidth - 2, ' ');

	for (int i = 0; i < rectHeight; ++i)
	{
		if (i == 0 || i == rectHeight - 1)
		{
			cout << rectWB << endl;
		}
		else
		{
			cout << "*" << rectWS << "*" << endl;
		}
	}

	// Drawing a triangle

	cout << "\nWhat height triangle? ";
	int triangle;
	cin >> triangle;
	cout << endl;

	for (int i = 0; i < triangle; ++i)
	{
		if (i == 0)
		{
			cout << "*" << endl;
		}
		else if (i == 1)
		{
			cout << "**" << endl;
		}
		else if (i == triangle - 1)
		{
			string bottom(triangle, '*');
			cout << bottom << endl;
		}
		else
		{
			string spaces((i - 1), ' ');
			cout << "*" << spaces << "*" << endl;
		}
	}

	return 0;
}