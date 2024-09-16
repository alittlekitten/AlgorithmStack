#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

// 도착점 기준 정렬, 도착점이 같으면 시작점 기준 정렬
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13334 철로
	// 우선순위큐
	int n, d; // 사람 수, 철로 길이
	vector<pair<int, int> > v;
	priority_queue<int> pq;

	// 입력
	cin >> n;
	int s, e;
	for (int i = 0; i < n; i++) {
		cin >> s >> e;
		if (s < e) v.push_back(make_pair(s, e));
		else v.push_back(make_pair(e, s));
	}
	cin >> d;

	// 도착점을 기준으로 정렬
	sort(v.begin(), v.end(), cmp);

	int ans = 0;
	for (int i = 0; i < v.size(); ++i) {
		int ss = v[i].first;
		int ee = v[i].second;

		// 철로 길이 한계점보다 작을때만 고려
		if (ee - ss <= d) {
			pq.push(-ss);

			while (!pq.empty()) {
				if (-pq.top() < ee - d) pq.pop();
				else {
					int tmp = pq.size();
					ans = max(ans, tmp);
					break;
				}
			}
		}
	}
	cout << ans;

	return 0;
}
