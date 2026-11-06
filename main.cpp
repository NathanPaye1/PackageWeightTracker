#include <limits>
#include <iostream>
#include <iomanip>
#include "package.h"

using namespace std;

int main()
{
	cout << "Package Weight Tracker\n\n";
	int numPackages = 0;

	cout << "How many packages?: ";
	cin >> numPackages;
	while(cin.fail() || numPackages < 1)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter a valid number of packages: ";
		cin >> numPackages;
	}
	cout << endl;

	double* weights = new double[numPackages]{};

	enterPackages(weights, numPackages);
	displayPackages(weights, numPackages);

	double total = calcTotal(weights, numPackages);
	double heaviest = findHeaviest(weights, numPackages);
	double avg = total / numPackages;

	cout << fixed << setprecision(2) << "Total Weight: " << total << " lbs"
	 << "\nAverage Weight: " << avg << " lbs"
	 << "\nHeaviest Package: " << heaviest << " lbs\n\n";

	delete[] weights;
	weights = nullptr;

	return 0;
}
