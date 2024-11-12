#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13323 BOJ 수열 1
	// 우선순위큐, slope trick
	int n, input;
	long long ans = 0;
	priority_queue<int> pq;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		input -= i;
		pq.push(input); 
		if (!pq.empty() && pq.top() > input) {
			ans += pq.top() - input;
			pq.pop();
			pq.push(input);
		}
	}

	// 3 4 8 13 14 15 18

	cout << ans << endl;

	return 0;
}
