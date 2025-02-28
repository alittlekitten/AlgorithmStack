#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13136 Do Not Touch Anything
	// 수학
	long long r, c, n;
	cin >> r >> c >> n;

	long long row = r / n + (r % n ? 1 : 0);
	long long col = c / n + (c % n ? 1 : 0);

	cout << row * col;

	return 0;
}
