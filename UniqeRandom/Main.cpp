#include<iostream>
using namespace std;

void main ()
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
	
	cout << "Filling the array with unique numbers:" << endl;
	for (int i = 0; i < n; i++)
	{
		bool ran;
		for (int j = 0; j < n; j++)
		{
			ran = true;
			for (int r = 0; r < n; r++)
			{
				for (int c = 0; c < n; c++)
				{
					if (r == i && c == j)
					{
						r = c = n;
						continue;
					}
					if (arr[r][c] == arr[i][j])
					{

					}
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}