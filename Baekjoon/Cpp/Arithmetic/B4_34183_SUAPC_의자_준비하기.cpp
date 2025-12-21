#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34183 SUAPC 의자 준비하기
	// 수학
	int n, m, a, b;
	cin >> n >> m >> a >> b;

	if (n * 3 - m > 0) cout << (n * 3 - m) * a + b;
	else cout << 0;

	return 0;
}
