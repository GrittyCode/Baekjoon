#include <iostream>
#include<string>

using namespace std;


int main()
{
	int iter, target;

	cin >> iter >> target;

	int arr[iter];

	int min = 0;

	for(int i = 0; i < iter; i++)
	{
		cin >> arr[i];
	}

	for(int i = 0; i < iter - 2; i++)
	{
		for(int j = i + 1; j < iter - 1; j++)
		{
			for(int w = j + 1; w  < iter; w++)
			{
				if(arr[i] + arr[j] + arr[w] <= target && target - (arr[i] + arr[j] + arr[w]) < target - min)
				{
					min = arr[i] + arr[j]+ arr[w];
				}
			}
		}
	}

	cout << min;

}