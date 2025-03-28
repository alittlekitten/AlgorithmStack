#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18258 큐 2
	// 큐
	int n, input;
	string s;
	queue<int> q;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> s;

		if (s == "push") {
			cin >> input;
			q.push(input);
		}
		else if (s == "pop") {
			if (!q.empty()) {
				cout << q.front() << '\n';
				q.pop();
			}
			else cout << -1 << '\n';
		}
		else if (s == "size") {
			cout << q.size() << '\n';
		}
		else if (s == "empty") {
			cout << q.empty() << '\n';
		}
		else if (s == "front") {
			if (!q.empty()) cout << q.front() << '\n';
			else cout << -1 << '\n';
		}
		else {
			if (!q.empty()) cout << q.back() << '\n';
			else cout << -1 << '\n';
		}
	}

	return 0;
}
