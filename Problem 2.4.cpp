#include <iostream>
#include <string>

//say what standard-library names we use
using std::cin; 
using std::endl;
using std::cout;
using std::string;

int main()
{
	cout << "Please enter your name: ";
	string name;
	cin >> name;

	int rPad, cPad;
	cout << "Please specify column spacing: ";
	cin >> cPad;

	cout << "Please specify row spacing: ";
	cin >> rPad;

	//build the message that we intend to write
	const string greeting = "Hello, " + name + "!";
	const string spaces((greeting.size() + 2*cPad), ' ');

	//total number of rows and cols to write
	const int rows = rPad * 2 + 3;
	const string::size_type cols = greeting.size() + cPad * 2 + 2;

	//separate output from input (adding a blank line)
	std::cout << std::endl;

	for (int r = 0; r != rows; ++r)
	{
		string::size_type c = 0;

		while (c != cols)
		{
			if (r == rPad + 1 && c == cPad + 1)
			{
				cout << greeting;
				c += greeting.size();
			}
			else if (r != (rPad + 1) && r!= 0 && r!= rows - 1 && c != 0 && c != cols - 1)
			{
				cout << spaces;
				c += spaces.size();
			}
			else
			{
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
				++c;
			}
		}
		cout << endl;
	}
	return 0;
}