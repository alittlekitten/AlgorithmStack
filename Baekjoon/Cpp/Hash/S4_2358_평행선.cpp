#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2358 평행선
	// 해시
	int n, x, y;
	map<int, int> mx;
	map<int, int> my;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		++mx[x];
		++my[y];
	}

	// 2 이상인 경우 ans에 1 추가
	int ans = 0;
	for (auto elem : mx) {
		if (elem.second > 1) ++ans;
	}
	for (auto elem : my) {
		if (elem.second > 1) ++ans;
	}

	cout << ans;

	return 0;
}
