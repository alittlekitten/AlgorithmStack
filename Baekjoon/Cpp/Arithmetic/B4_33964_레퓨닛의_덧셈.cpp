#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33964 레퓨닛의 덧셈
	// 수학
	int x, y;
	cin >> x >> y;
		
	int ans1 = 0;
	int ans2 = 0;
	for (int i = 0; i < x; ++i) ans1 = ans1 * 10 + 1;
	for (int i = 0; i < y; ++i) ans2 = ans2 * 10 + 1;
	cout << ans1 + ans2;

	return 0;
}
