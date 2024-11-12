#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13324 BOJ 수열 2
	// 우선순위큐, slope trick
	int n, input;
	long long arr[1000001] = { 0 };
	priority_queue<int> pq;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		input -= i;
		pq.push(input); 
		arr[i] = pq.top();
		pq.pop();
		pq.push(input);
	}

	// 뒤에서부터 처리해야 원하는 값이 도출됨
	for (int i = n - 2; i >= 0; --i) {
		if (arr[i] > arr[i + 1]) arr[i] = arr[i + 1];
	}

	for (int i = 0; i < n; ++i) cout << arr[i] + i << '\n';

	return 0;
}
