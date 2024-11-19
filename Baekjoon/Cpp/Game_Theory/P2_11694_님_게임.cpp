#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11694 님 게임
	// 게임이론, 스프라그 그런디
	int n, p;
	int ans = 0;
	int chk = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> p;
		ans ^= p; // XOR - 따라 가져갈 수 있는지
		chk |= ans > 1; // 1개 이상의 돌을 가졌는지 판단
	}

	if (chk) {
		if (ans) cout << "koosaga";
		else cout << "cubelover";
	}
	else {
		if (ans) cout << "cubelover";
		else cout << "koosaga";
	}

	return 0;
}
