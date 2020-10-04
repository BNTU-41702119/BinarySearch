#include <iostream>

using namespace std;

int searchBinary(int numbers[], int left, int right, int key)
{
	int midd = 0;
	while (1)
	{
		midd = (left + right) / 2;

		if (key < numbers[midd])
		{
			right = midd - 1;
		}
		else if (key > numbers[midd])
		{
			left = midd + 1;
		}
		else
		{
			return midd;
		}
			

		if (left > right)
		{
			return -1;
		}
	}
}

int main()
{
	const int SIZE = 12;
	int numbers[SIZE] = {};
	for (int index = 0; index < SIZE; index++)
	{
		numbers[index] = index + 1;
		cout << numbers[index] << " | ";
	}

	cout << endl << "Enter number: ";
	int key = 0;
	cin >> key;

	int index = searchBinary(numbers, 0, SIZE, key);

	if (index >= 0)
	{
		cout << "Number index: " << index << endl;
	}
	else
	{
		cout << "No such number in array" << endl;
	}
}
