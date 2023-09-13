#include <iostream>
#include <array>
#include <vector>

using namespace std;

int addArray(int x[]);

int addArray(int x[])
{
	int sum = 0;

	for (int i = 0; i < x.size() - 1; i++)
	{
		sum += x[i];
	}

	return sum;
}

//part 10 rebasing