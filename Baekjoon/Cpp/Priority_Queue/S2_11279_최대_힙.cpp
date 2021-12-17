#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 와! priority queue 쓰면 된다!
	priority_queue<int> pq;
	int n, input;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input) pq.push(input);
		else {
			if (pq.size()) {
				cout << pq.top() << '\n';
				pq.pop();
			}
			else cout << '0' << '\n';
		}
	}

	return 0;
}
