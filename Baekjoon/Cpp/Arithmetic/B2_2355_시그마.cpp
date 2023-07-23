#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2355 시그마
	// 수학
	long long a, b;
	cin >> a >> b;
	if (a < b) cout << (b - a + 1) * (b + a) / 2;
	else cout << (a - b + 1) * (a + b) / 2;

	return 0;
}
