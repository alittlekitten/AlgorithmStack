#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// 2953 나는 요리사다
	// 수학
	int a, b, c, d;
	int maxIdx = 0;
	int maxValue = 0;
	for (int i = 1; i <= 5; ++i) {
		cin >> a >> b >> c >> d;
		if (a + b + c + d > maxValue) {
			maxIdx = i;
			maxValue = a + b + c + d;
		}
	}
	cout << maxIdx << " " << maxValue;

	return 0;
}
