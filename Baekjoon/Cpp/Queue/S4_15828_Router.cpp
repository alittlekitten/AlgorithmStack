#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15828 Router
	// 큐
	int n, input;
	cin >> n;
	queue<int> q;

	while (1) {
		cin >> input;
		if (input == -1) break;
		if (input > 0) {
			if (q.size() < n) q.push(input);
		}
		if (!input) q.pop();
	}

	if (q.empty()) cout << "empty";
	else {
		while (!q.empty()) {
			cout << q.front() << ' ';
			q.pop();
		}
	}

	return 0;
}
