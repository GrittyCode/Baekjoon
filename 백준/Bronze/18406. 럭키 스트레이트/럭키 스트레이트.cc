#include<iostream>
#include<string>
#include<math.h>
using namespace std;


bool LuckyStraight(int N)
{
	//먼저, 자리수를 구해야한다. int의 자리수를 구하는 방법은 ?
	//100 => 3자리수 10^2다. => N을 계속 10으로 나눠주며 임의의 변수에 +1씩 더해준다. 만약 10으로 나눴을 때 0이 나오면 종료.
	int cnt = 0;
	int temp = N;

	//자리수 구하는 부분
	while (temp != 0)
	{
		temp /= 10;
		cnt++;
	}


	int sum_A = 0, sum_B = 0;
	//자리수 별 값을 더해줄 변수들


	for (int i = 1; i <= cnt; ++i)
	{
		if (i > cnt / 2) //반을 넘었을 때
		{
			temp = N % 10;
			sum_B += temp;
			N /= 10;
		}
		else //반이 안넘었을 때
		{
			temp = N % 10;
			sum_A += temp;
			N /= 10;
		}
	}

	if (sum_A == sum_B) return true;
	else return false;

}


int main()
{
	int N;
	cin >> N;
	
	if (LuckyStraight(N))
	{
		cout << "LUCKY" << endl;
	}
	else
	{
		cout << "READY" << endl;
	}
}
