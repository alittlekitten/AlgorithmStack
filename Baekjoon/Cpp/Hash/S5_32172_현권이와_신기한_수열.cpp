#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32172 현권이와 신기한 수열
	// 해시
	int n;
	int a = 0;
	bool chk[1000001] = { 0 };
	cin >> n;


	for (int i = 1; i <= n; ++i) {
		chk[a] = true;
		int next = a - i;

		if (next < 0 || chk[a - i]) next = a + i;
		a = next;
	}

	cout << a;

	return 0;
}
