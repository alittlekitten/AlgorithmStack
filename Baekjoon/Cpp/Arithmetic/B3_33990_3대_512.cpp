#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33990 3대 512
	// 수학
	int n, a, b, c;
	cin >> n;

	int sum = 601;
	while (n--) {
		cin >> a >> b >> c;
		if (a + b + c >= 512 && sum > a + b + c) sum = a + b + c;
	}

	if (sum == 601) cout << -1;
	else cout << sum;

	return 0;
}
