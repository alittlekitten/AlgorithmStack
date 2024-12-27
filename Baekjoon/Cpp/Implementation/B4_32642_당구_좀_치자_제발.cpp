#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32642 당구 좀 치자 제발
	// 구현
	int n, input;
	cin >> n;

	long long angry = 0; // 분노
	long long ans = 0; // 합
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input) ++angry;
		else --angry;

		ans += angry;
	}
	cout << ans;

	return 0;
}
