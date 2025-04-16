#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17869 Simple Collatz Sequence
	// 수학
	long long n;
	cin >> n;

	long long ans = 0;
	while (n != 1) {
		if (n % 2) ++n;
		else n /= 2;
		++ans;
	}
	cout << ans;

	return 0;
}
