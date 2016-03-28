#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Please enter your phrase, followed by the end-of-file command." << endl;

	int count = 0;
	string words;

	while (cin >> words)
	{
		++count;
	}

	cout << "You entered " << count << " words." << endl;

	return 0;
}