#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11003 최솟값 찾기
	// 우선순위큐, 덱
	deque<pair<int, int>> dq;
	int n, l, a;
	cin >> n >> l;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (!dq.empty() && dq.front().second < i - l + 1) dq.pop_front();
		while (!dq.empty() && dq.back().first > a) dq.pop_back();
		dq.push_back(make_pair(a, i));
		cout << dq.front().first << " ";
	}

	return 0;
}
