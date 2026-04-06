#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 35409 제4회 디미고 프로그래밍 챌린지
	// 구현
	int h, m;
	cin >> h >> m;

	int t = h * 60 + m;

	if (
		(390 <= t && t <= 540) || (590 <= t && t <= 600) ||
		(650 <= t && t <= 660) || (710 <= t && t <= 720) ||
		(770 <= t && t <= 830) || (880 <= t && t <= 890) ||
		(940 <= t && t <= 950) || (1000 <= t && t <= 1370)
		) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}
