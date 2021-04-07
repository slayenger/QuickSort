#include <iostream>
using namespace std;


int main()
{
	int n;	
	cout << "Enter the number of numbers in array " << endl;
	cin >> n;
	int* bbl= new int[n];
	srand(0);// time(NULL));
	int i = 0;
	//Filling array of random numbers in the range from -50 to 50
	for  (i; i < n; i++)
	{
		bbl[i] = rand() % 101 - 50;
		cout << bbl[i] << " ";
	}
	cout << endl;
	int m;
	bool ifsp=false; 
	for (int i = 0; i < n - 1; i++)
	{
		ifsp = false;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (bbl[j] > bbl[j + 1])
			{
				swap(bbl[j], bbl[j + 1]);
				ifsp = true;
			}
		}
		for (int l = 0; l < n; l++)
		{
			cout << bbl[l] << " ";
		}
		cout << endl;
		if (ifsp == false)
		{
			break;
		}
		else 
		{
			for (int k = n-i-1; k > 1; k--)
			{
				if (bbl[k] < bbl[k - 1])
				{
					swap(bbl[k], bbl[k - 1]);
				}
			}
		}
		for (int l = 0; l < n; l++)
		{
			cout << bbl[l] << " ";
		}
		cout << endl;
	}
	for (int l = 0; l < n; l++)
	{
		cout << bbl[l] << " ";
	}
	cout << endl;
	return 0;
}