#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31428 엘리스 트랙 매칭
	// 구현
	int n;
	char c[10001];
	char h;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> c[i];
	cin >> h;
	for (int i = 0; i < n; ++i) {
		if (h == c[i]) ++ans;
	}

	cout << ans;

	return 0;
}
