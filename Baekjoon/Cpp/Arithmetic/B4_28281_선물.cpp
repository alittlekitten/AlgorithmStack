#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28281 선물
	// 수학
	int n, x, a;
	int before = -1;
	int ans = 2000000001;
	
	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (i != 0 && ans > a + before) ans = a + before;
		before = a;
	}
	cout << ans * x;
	
	return 0;
}
