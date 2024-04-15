#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Pos {
	int start;
	int end;
	int idx;
};

bool cmp(Pos& p1, Pos& p2) {
	if (p1.start != p2.start) return p1.start < p2.start;
	return p1.end > p2.end;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 10165 버스 노선
	// 그리디
	int n, m, s, e;
	vector<Pos> bus;

	cin >> n >> m;
	for (int i = 1; i <= m; ++i) {
		cin >> s >> e;
		if (s < e) bus.push_back({ s, e, i });
		else {
			bus.push_back({ s - n, e, i });
			bus.push_back({ s, e + n, i });
		}
	}

	sort(bus.begin(), bus.end(), cmp);

	// 순수 노선 추리기
	vector<int> ans;
	ans.push_back(bus[0].idx);

	int tmp = 0;
	for (int i = 1; i < bus.size(); ++i) {
		if (bus[tmp].end < bus[i].end) {
			ans.push_back(bus[i].idx);
			tmp = i;
		}
	}

	sort(ans.begin(), ans.end());

	// 중복제거
	ans.erase(unique(ans.begin(), ans.end()), ans.end());

	for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";

	return 0;
}
