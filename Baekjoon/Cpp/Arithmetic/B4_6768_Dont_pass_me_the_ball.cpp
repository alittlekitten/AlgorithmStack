#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6768 Don't pass me the ball!
	// 수학
	int n;
	int ans = 1;

	cin >> n;
	for (int i = 1; i <= 3; ++i) ans *= n - i;
	cout << ans / 6;

	return 0;
}
