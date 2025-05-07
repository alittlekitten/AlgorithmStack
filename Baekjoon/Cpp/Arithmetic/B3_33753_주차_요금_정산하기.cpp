#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33753 주차 요금 정산하기
	// 수학
	int a, b, c, t;
	cin >> a >> b >> c >> t;

	if (t <= 30) cout << a;
	else cout << a + ((t - 31) / b + 1) * c;

	return 0;
}
