#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28014 첨탑 밀어서 부수기
	// 그리디
	int n, h;
	vector<int> v;
	int ans = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h;
		v.push_back(h);
	}

	for (int i = n - 1; i > 0; --i) {
		if (v[i] >= v[i - 1]) ans++;
	}
	cout << ans;

	return 0;
}
