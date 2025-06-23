#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33868 스티커 나눠주기
	// 구현
	int n, t, b;
	cin >> n;

	int maxT = -1;
	int minB = 5001;
	while (n--) {
		cin >> t >> b;
		if (t > maxT) maxT = t;
		if (b < minB) minB = b;
	}

	cout << (maxT * minB) % 7 + 1;

	return 0;
}
