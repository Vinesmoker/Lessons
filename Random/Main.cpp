#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10; int minLim; int maxLim;
	int arr[n]{};
	cout << "Enter the minimum value of the number range: "; cin >> minLim;
	cout << "Enter the maximum value of the number range: "; cin >> maxLim;
	for (int i = 0; i < n; i++)
	{
		arr[i] = minLim + rand() % (maxLim - minLim) + 1;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n\n";
	cout << "Sort the array in ascending order:" << endl;
	for (int i = 0; i < n; i++)
	{
		int buff = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buff = arr[i];
				arr[i] = arr[j];
				arr[j] = buff;
			}
		}
		cout << arr[i] << "\t";
	}
	cout << "\n\n";
	cout << "Sort the array in descending order:" << endl;
	for (int i = 0; i < n; i++)
	{
		int buff = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] > arr[i])
			{
				buff = arr[j];
				arr[j] = arr[i];
				arr[i] = buff;
			}
		}
		cout << arr[i] << "\t";
	}
	cout << "\n\n";
}