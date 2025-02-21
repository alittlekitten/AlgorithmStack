#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32585 Building Pyramids
	// 수학
	long long n;
	cin >> n;

	// 1, 3, 6, 10, 15, 21, ..
	cout << n * (n + 1) * (n + 2) / 6;

	return 0;
}
