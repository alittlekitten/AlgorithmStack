#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32902 Chips
	// 수학
	int k, n;
	cin >> k >> n;
	cout << n + 1 << " " << k * n + 1;

	return 0;
}
