#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27966 △
	// 애드혹
	long long n;
	cin >> n;

	cout << (n - 1) + (n - 1) * (n - 2) << '\n';
	for (int i = 2; i < n + 1; ++i) cout << 1 << " " << i << '\n';

	return 0;
}
