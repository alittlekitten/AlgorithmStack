#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34935 오름차순과 비내림차순
	// 수학
	long long n, a;
	cin >> n;

	long long tmp = -1000000000000000001;
	bool chk = false;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (tmp >= a) {
			chk = true;
			break;
		}
		tmp = a;
	}

	if (chk) cout << 0;
	else cout << 1;

	return 0;
}
