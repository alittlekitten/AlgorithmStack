#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30468 호반우가 학교에 지각한 이유 1
	// 수학
	int a, b, c, d, n;
	cin >> a >> b >> c >> d >> n;
	cout << max(0, n * 4 - (a + b + c + d));

	return 0;
}
