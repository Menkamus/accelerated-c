#include <iostream>
#include <ios>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cout << "Please enter your phrase, followed by the end-of-file command." << endl;

	string input;
	int small = 0, large = 0;
	vector<string> words;

	while (cin >> input)
	{
		words.push_back(input);
		if (small == 0)
		{
			small = input.length();
		}
		else if (input.length() < small)
		{
			small = input.length();
		}
		else if (input.length() > large)
		{
			large = input.length();
		}
	}

	cout << "The smallest word size is: " << small << endl;
	cout << "The largest word size is: " << large << endl;

	return 0;
}