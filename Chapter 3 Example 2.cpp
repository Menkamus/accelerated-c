#include <iomanip> // for setprecision
#include <ios> // for streamsize
#include <iostream> // for cin cout endl
#include <string> // for strings
#include <vector> // for...vector
#include <algorithm> // for sort

using std::cin; using std::cout;
using std::endl; using std::setprecision;
using std::string; using std::streamsize;
using std::sort; using std::vector;

int main()
{
	// ask for the student's name
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	// ask for and read the midterm and final grades
	cout << "Please enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;

	// ask for the homework grades
	cout << "Enter all of your homework grades, "
			"followed by end-of-file: ";

	// revised version of the excerpt:
	double x;
	vector<double> homework;

	// invariant:
	//		"homework" contains all the homework grades read so far
	while (cin >> x)
	{
		homework.push_back(x);
	}


	// define type and initialize "size"
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();

	if (size == 0)
	{
		cout << endl << "You must enter your grades. "
			"Please try again." << endl;
		return 1;
	}

	sort(homework.begin(), homework.end());

	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
		: homework[mid];

	// write the result
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;

	return 0;
}