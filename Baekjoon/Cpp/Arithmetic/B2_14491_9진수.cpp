#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14491 9진수
	// 수학
	int t;
	int ans = 0;
	int cnt = 0;
	cin >> t;
	while (t) {
		ans += (t % 9) * pow(10, cnt++);
		t /= 9;
	}
	cout << ans;

	return 0;
}
