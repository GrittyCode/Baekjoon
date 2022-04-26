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


	
	int B_cnt = cnt / 2; // 
	int A_cnt = cnt - B_cnt; //첫번째 ~ n/2


	for (int i = 0; i < A_cnt; ++i) //첫번째부터 ~ n / 2
	{
		temp = N % 10; //자리값 별로 나머지 연산을 통해 1~9값을 구해준다.
		sum_B += temp; //자리값 별로 더해준다. 
		N /= 10;
	}

	for (int i = 0; i < B_cnt; ++i)// (n / 2) + 1 ~ n번째까지
	{
		temp = N % 10;
		sum_A += temp;
		N /= 10;
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
