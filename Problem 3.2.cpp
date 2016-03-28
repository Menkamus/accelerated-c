#include <iostream>
#include <ios>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cout << "Please input your dataset, followed by "
		"the end-of-file command." << endl;

	// storage for input and vector for set of input data
	double x;
	vector<double> data;

	// read x into vector data
	while (cin >> x)
	{
		data.push_back(x);
	}

	// define vec_sz, define size_type vector for data
	typedef vector<double>::size_type vec_sz;
	vec_sz size = data.size();

	// sort data from lowest to highest
	sort(data.begin(), data.end());

	// check if any data has been input
	if (size == 0)
	{
		cout << endl << "You must enter your grades. "
			"Please try again." << endl;
		return 1;
	}

	// define quart as 1/4 size of vector, quartile vectors
	vec_sz quart = size / 4;
	vector<double> q1, q2, q3, q4;

		for (int i = 0; i < quart; ++i)
		{
			q1.push_back(data[i]);
			q2.push_back(data[i + quart]);
			q3.push_back(data[i + 2 * quart]);
			q4.push_back(data[i + 3 * quart]);
		}

	// write the result
	streamsize prec = cout.precision();
	cout << "Your final grade quartiles: " 
		<< setprecision(3) << endl;

	cout << "Q1: ";
	for (int i = 0; i < quart; ++i)
	{
		cout << q1[i] << " ";
	}
	cout << endl;

	cout << "Q2: ";
	for (int i = 0; i < quart; ++i)
	{
		cout << q2[i] << " ";
	}
	cout << endl;

	cout << "Q3: ";
	for (int i = 0; i < quart; ++i)
	{
		cout << q3[i] << " ";
	}
	cout << endl;

	cout << "Q4: ";
	for (int i = 0; i < quart; ++i)
	{
		cout << q4[i] << " ";
	}
	cout << endl;

		cout << setprecision(prec) << endl;

	return 0;
}