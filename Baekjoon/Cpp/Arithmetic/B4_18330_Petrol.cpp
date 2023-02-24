#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18330 Petrol
	// 수학
	int n, k;
	cin >> n >> k;
	if (k + 60 >= n) cout << n * 1500;
	else cout << (k + 60) * 1500 + (n - k - 60) * 3000;

	return 0;
}
