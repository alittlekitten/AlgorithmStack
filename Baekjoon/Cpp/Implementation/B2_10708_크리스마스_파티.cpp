#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10708 크리스마스 파티
	// 구현
	int n, m, a;
	int target[101] = { 0 }; // 타겟
	int score[101] = { 0 };

	cin >> n >> m;
	for (int i = 0; i < m; ++i) cin >> target[i];
	for (int i = 0; i < m; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> a;
			if (a == target[i]) ++score[j];
			else ++score[target[i]];
		}
	}
	for (int i = 1; i <= n; ++i) {
		cout << score[i] << '\n';
	}

	return 0;
}
