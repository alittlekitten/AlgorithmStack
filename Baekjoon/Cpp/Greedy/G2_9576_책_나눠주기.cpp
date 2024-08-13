#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9576 책 나눠주기
	// 그리디
	int t, n, m, a, b;

	cin >> t;
	while (t--) {
		int ans = 0;
		int chk[1001] = { 0 }; // 책 나눠줬는지 체크배열
		priority_queue<pair<int, int>> pq;
		cin >> n >> m;
		for (int i = 0; i < m; ++i) {
			cin >> a >> b;
			pq.push(make_pair(-b, -a)); // b라는 최대치가 가장 작은 순서대로 정렬, 그게 같으면 a가 작은 순서대로 정렬
		}

		while (!pq.empty()) {
			b = -pq.top().first;
			a = -pq.top().second;
			pq.pop();

			// 줄 수 있는 가장 작은 번호의 책 주기
			for (int i = a; i <= b; ++i) {
				if (!chk[i]) {
					chk[i] = true;
					++ans;
					break;
				}
			}
		}
		
		cout << ans << '\n';
	}

	return 0;
}
