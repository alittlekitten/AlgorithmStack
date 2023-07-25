#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5176 대회 자리
	// 구현
	int k, p, m, tmp;
	cin >> k;

	while (k--) {
		cin >> p >> m;
		bool arr[501] = { 0 };
		int cnt = 0;

		for (int i = 0; i < p; i++) {
			cin >> tmp;
			if (arr[tmp]) ++cnt;
			else arr[tmp] = 1;
		}
		cout << cnt << endl;
	}

	return 0;
}
