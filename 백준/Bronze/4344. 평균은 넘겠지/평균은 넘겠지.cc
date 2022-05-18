#include <iostream> 
#include<cstdio>

#define SUM(a,b) a + b
#define MAX 1000

using namespace std;


void Init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}


int main()
{
	int arr[MAX];

	//처음 반복 횟수를 지정 -> 숫자에 따라 학생의 점수 입력 -> 평균 구하기 -> 0 ~ 숫자 - 1까지 확인 후 평균을 넘는다면 avg_sum++ 진행
	Init();
	int iter;
	cin >> iter;
	for (int i = 0; i < iter; ++i)
	{
		int number;
		int sum = 0;

		cin >> number;
		for (int j = 0; j < number; ++j)
		{
			cin >> arr[j];
			sum += arr[j];
		}
		int avg = 0;
		avg = sum / number;

		int avg_cnt = 0;
		for (int j = 0; j < number; ++j)
		{
			if (arr[j] > avg) avg_cnt++;
		}

		float avg_exceed_ratio = 0.0f;
		avg_exceed_ratio = (float)avg_cnt / (float)number * 100;

		printf("%.3f%%\n", avg_exceed_ratio);
		
	}
	return 0;
	
}
