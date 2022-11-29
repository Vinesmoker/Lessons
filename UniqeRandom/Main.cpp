#include<iostream>
using namespace std;

void main ()
{
	setlocale(LC_ALL, "");
	const int n = 10; int minLim; int maxLim;
	int arr[n]{};
	cout << "Enter the minimum value of the number range: "; cin >> minLim;
	cout << endl;
	cout << "Enter the maximum value of the number range: "; cin >> maxLim;
	cout << endl;

	bool random;
	for (int i = 0; i < n;)
	{
		random = false;
		int ranVal = (minLim) + rand() % ((maxLim + 1) - minLim);
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == ranVal)
			{
				random = true; 
				break;
			}
		}
		if (random == false)
		{
			arr[i] = ranVal; i++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}