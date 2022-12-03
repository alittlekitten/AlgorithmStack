#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// 5691 평균 중앙값 문제
	// 수학
	int a, b;
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << 2 * a - b << endl;
	}

	return 0;
}
