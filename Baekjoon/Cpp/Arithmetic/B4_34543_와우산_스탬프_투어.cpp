#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34543 와우산 스탬프 투어
	// 수학
	int n, w;
	cin >> n >> w;

	int ans = 0;
	if (n == 5) ans = 120;
	else if (n >= 3) ans = n * 10 + 20;
	else ans = n * 10;

	if (w > 1000) ans -= 15;
	cout << max(ans, 0);

	return 0;
}
