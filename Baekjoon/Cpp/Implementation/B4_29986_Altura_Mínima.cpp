#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29986 Altura Mínima
	// 구현
	int n, h, a;
	int ans = 0;
	cin >> n >> h;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a <= h) ++ans;
	}
	cout << ans;

	return 0;
}
