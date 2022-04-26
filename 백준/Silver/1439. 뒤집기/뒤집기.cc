#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int Flip(string s)
{
	//문자열의 연속되게 같은 값이 나오면 그냥 진행 한 후, 만약 다른 수가 나오면 
	//그 값의 변수에 +1을 해줘 0의 연속된 문자열, 1의 연속된 문자열의 수를 구해준다.
	int zero_cnt = 0, one_cnt = 0;
	char c_temp = s[0];
	for (int i = 0; i < s.size(); ++i)
	{
		if (c_temp == s[i])
		{
			continue;
		}
		else
		{
			if (c_temp == '1')
			{
				one_cnt++;
				c_temp = s[i];
			}
			else
			{

				zero_cnt++;
				c_temp = s[i];
			}
		}
	}

	//마지막 문자열도 더해준다.
	if (c_temp == '1')
	{
		one_cnt++;
	}
	else
	{
		zero_cnt++;
	}

	int MIN = min(one_cnt, zero_cnt);
	return MIN;
}

int main()
{
	string n;
	cin >> n;
	int s = Flip(n);
	cout << s;
	return 0;
}
