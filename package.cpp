#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

void enterPackages(double* weights, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "Enter weight of package " << i + 1 << ": ";
		cin >> weights[i];

		while(cin.fail() || weights[i] <= 0)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "Invalid Weight\nEnter weight of package " << i + 1 << ": ";
			cin >> weights[i];
		}
	}
}
void displayPackages(const double* weights, int size)
{
	cout << "\nPACKAGE SUMMARY";
	for(int i = 0; i < size; i++)
	{
		cout << fixed << setprecision(2) << "\nPackage " << i + 1 << ": " << weights[i];
	}
	cout << "\n\n";
}
double calcTotal(const double* weights, int size)
{
	double total = 0;
	if(weights)
	{
	        for(int i = 0; i < size; i++)
	        {
                	total += weights[i];
        	}
        }
	return total;
}
double findHeaviest(const double* weights, int size)
{
	double heaviest = 0;
	if(weights)
	{
		for(int i = 0; i < size; i++)
		{
			if(weights[i] > heaviest)
			{
				heaviest = weights[i];
			}
		}
	}
	return heaviest;
}
