#include <iostream>
#include <vector>

using namespace std;

int addArray(vector<int> x);
int mulArray(vector<int> x);
vector reverseArray(vector<int> x);

int addArray(vector<int> x)
{
	int sum = 0;

	for (int i = 0; i < x.size() - 1; i++)
	{
		sum += x[i];
	}

	return sum;
}

int mulArray(vector<int> x)
{
	int product = 1; //start at 1 not 0 for multiplication

	for (int i = 0; i < x.size() - 1; i++)
	{
		product *= x[i];
	}

	return product;
}

vector reverseArray(vector<int> x)
{
	vector<int> reversed;

	while (x.size() > 0)
	{
		reversed.push_back(x.pop_back);
	}

	return reversed;
}

int main()
{
	vector<int> vect1;
	vector<int> vectReversed;
	int x; 

	cout << "please enter a number: ";
	while (cin >> x && (x != 's' || x != 'S'))
	{
		vect1.push_back(x);
		cout << endl << "when you are done entering numbers press s to stop" << endl << "please enter a number: ";
	}

	cout << "the sum of the numbers in the array is: " << addArray(vect1) << endl;
	cout << "the product of the numbers in the array is: " << mulArray(vect1) << endl;
	cout << "the reversed array is: ";

	vectReversed = reverseArray(vect1);
	for (int i = 0; i < vectReversed.size() - 1; i++)
	{
		cout << vectReversed[i] << " ";
	}


	return 0;
}
