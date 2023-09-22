#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30017 치즈버거 만들기
	// 수학
	int a, b;
	cin >> a >> b;
	if (a == b) cout << a + b - 1;
	else if (a > b - 1) cout << 2 * b + 1;
	else cout << 2 * a - 1;

	return 0;
}
