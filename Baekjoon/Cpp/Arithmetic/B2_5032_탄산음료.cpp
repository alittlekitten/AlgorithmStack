#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5032 탄산음료
	// 수학
	int e, f, c;
	int ans = 0;
	cin >> e >> f >> c;
	int empty = e + f;
	while (empty >= c) {
		ans += empty / c;
		empty = empty / c + empty % c;
	}
	cout << ans;

	return 0;
}
