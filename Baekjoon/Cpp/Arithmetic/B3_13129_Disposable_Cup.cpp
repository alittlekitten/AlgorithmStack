#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13129 Disposable Cup
	// 수학
	int a, b, n;
	cin >> a >> b >> n;
	for (int i = 1; i <= n; ++i) cout << a * n + b * i << " ";

	return 0;
}
