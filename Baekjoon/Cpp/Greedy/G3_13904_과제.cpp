#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13904 과제
	// 그리디
	int n, d, w;
	priority_queue<pair<int, int>> pq;
	bool isVisit[1001] = { 0 };
	int ans = 0;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> d >> w;
		pq.push(make_pair(w, -d)); // 점수, -날짜
	}

	while (!pq.empty()) {
		int score = pq.top().first;
		int day = -pq.top().second;
		pq.pop();

		for (int i = day; i > 0; --i) {
			// 방문한 적 없는 날이면 그날 과제하면 됨
			if (!isVisit[i]) {
				isVisit[i] = true;
				ans += score;
				break;
			}
		}
	}
	cout << ans;

	return 0;
}
