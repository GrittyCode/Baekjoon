#include <iostream>
#include<string>

using namespace std;

void starCheck(int i, int j, int n)
{
	if(i / n % 3 == 1 && j / n % 3 == 1)
		cout << " ";
	else
	{
		if	(n / 3 == 0)
			cout << "*";
		else
			starCheck(i,j, n /3);
	}

	
}


int main()
{
	int num;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
            starCheck(i,j,num);
        cout << '\n';
	}


}