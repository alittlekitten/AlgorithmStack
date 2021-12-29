#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

struct cmp {
	bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
		if (a.first == b.first) return a.second > b.second;
		return a.first > b.first;
	}
};


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 11286 절댓값 힙
	int n, input;
	priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input == 0) {
			if (pq.size()) {
				cout << pq.top().second << '\n';
				pq.pop();
			}
			else {
				cout << 0 << '\n';
			}
		}
		else {
			pq.push(make_pair(abs(input), input));
		}
	}

	return 0;
}
