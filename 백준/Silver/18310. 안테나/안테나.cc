#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[200005];
int ans;

void solve() 
{
	sort(arr, arr + N);
	ans = arr[(N - 1) / 2];
}

void Init()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int main() {

	Init();

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
		
	solve();
	cout << ans << '\n';

	return 0;
}