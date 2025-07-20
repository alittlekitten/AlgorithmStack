#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14646 욱제는 결정장애야!!
	// 구현
	int n, input;
	cin >> n;
	n *= 2;

	bool chk[100001] = { 0 };
	int tmp = 0;
	int ans = 0;
	while (n--) {
		cin >> input;
		if (chk[input]) --tmp;
		else {
			chk[input] = true;
			++tmp;
			if (tmp > ans) ans = tmp;
		}
	}

	cout << ans;

	return 0;
}
