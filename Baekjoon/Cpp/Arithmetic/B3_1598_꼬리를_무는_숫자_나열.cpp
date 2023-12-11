#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1598 꼬리를 무는 숫자 나열
	// 수학
	int a, b;
	cin >> a >> b;
	cout << abs(((a - 1) / 4) - ((b - 1) / 4)) + abs(((a - 1) % 4) - ((b - 1) % 4));

	return 0;
}
