#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	// priority_queue를 쓴다면..?
	priority_queue<int, vector<int>, greater<int>> pq;
	int n, x;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (x == 0) {
			if (pq.size()) {
				cout << pq.top() << '\n';
				pq.pop();
			}
			else cout << '0' << '\n';
		}
		else pq.push(x);
	}

	return 0;
}
