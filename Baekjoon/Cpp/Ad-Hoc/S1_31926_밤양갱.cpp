#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31926 밤양갱
	// 애드 혹
	int n;
	cin >> n;

	int ans = 0;
	while (n) {
		n >>= 1;
		++ans;
	}
	cout << ans + 9;

	return 0;
}
