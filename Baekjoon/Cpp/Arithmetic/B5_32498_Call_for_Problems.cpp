#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32498 Call for Problems
	// 수학
	int n, d;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> d;
		if (d % 2) ++ans;
	}

	cout << ans;

	return 0;
}
