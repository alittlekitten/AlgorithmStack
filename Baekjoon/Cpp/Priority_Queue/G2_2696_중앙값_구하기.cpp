#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2696 중앙값 구하기
	// 우선순위 큐
	long long t, n, input;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<long long> v;
		priority_queue<long long, vector<long long>, greater<long long>> down;
		priority_queue<long long> up;
		for (int i = 1; i <= n; ++i) {
			cin >> input;
			if (i % 2) {
				up.push(input);
				if (!up.empty() && !down.empty()) {
					if (up.top() > down.top()) {
						down.push(up.top());
						up.pop();
						up.push(down.top());
						down.pop();
					}
				}
			}
			else {
				down.push(input);
			}

			if (i % 2 != 0) v.push_back(up.top());
		}
		cout << v.size() << '\n';

		for (int i = 0; i < v.size(); ++i) {
			if (i != 0 && i % 10 == 0) cout << '\n';
			cout << v[i] << " ";
		}
		cout << '\n';
	}

	return 0;
}
