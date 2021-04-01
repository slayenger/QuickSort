#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n;	
	cout << "Enter the number of numbers in array " << endl;
	cin >> n;
	int* bbl= new int[n];
	srand(time(NULL));
	int i = 0;
	//Filling array of random numbers in the range from -50 to 50
	for  (i; i < n; i++)
	{
		bbl[i] = rand() % 101 - 50;
		cout << bbl[i] << " ";
	}
	cout << endl;
	i = 0;
	int j = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (j=0; j < n - 1 - i; j++)
		{
			if (bbl[j] > bbl[j + 1])
			{
				swap(bbl[j], bbl[j + 1]);
			}
		}		
	}
	for (i = 0; i < n; i++)
	{
		cout << bbl[i] << " ";
	}
	return 0;
}