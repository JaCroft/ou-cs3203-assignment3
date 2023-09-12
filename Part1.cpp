#include <iostream>
#include <array>

using namespace std;

int addArray(int x[]);
int mulArray(int x[]);

int addArray(int x[])
{
	int sum = 0;

	for (int i = 0; i < x.size() - 1; i++)
	{
		sum += x[i];
	}

	return sum;
}

int mulArray(int x[])
{
	int product = 1; //start at 1 not 0 for multiplication

	for (int i = 0; i < x.size() - 1; i++)
	{
		product *= x[i];
	}

	return product;
}
