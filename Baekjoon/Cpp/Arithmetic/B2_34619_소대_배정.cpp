#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34619 소대 배정
	// 수학
	int a, b, n, k;
	cin >> a >> b >> n >> k;

	cout << (k - 1)/ (b * n) + 1 << " " << ((k - 1) % (b * n)) / n + 1;

	return 0;
}
