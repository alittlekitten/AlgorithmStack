#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1158 요세푸스 문제
	// 큐

	int n, k;
	
	queue<int> q;
	vector<int> v;

	cin >> n >> k;

	for (int i = 1; i <= n; ++i){
		q.push(i);
	}

	int cnt = 0;
	while (!q.empty()) {
		cnt++;
		if (cnt == k) {
			v.push_back(q.front());
			cnt = 0;
		}
		else {
			q.push(q.front());
		}
		q.pop();
	}

	cout << "<";
	for (int i = 0; i < v.size(); ++i) {
		if (i != v.size() - 1) cout << v[i] << ", ";
		else cout << v[i];
	}

	cout << ">";
	return 0;
}
