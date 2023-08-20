#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17263 Sort 마스터 배지훈
	// 구현
	int n, input;
	int maxValue = -1;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input > maxValue) maxValue = input;
	}
	cout << maxValue;

	return 0;
}
