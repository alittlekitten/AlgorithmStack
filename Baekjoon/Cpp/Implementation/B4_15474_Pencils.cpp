#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15474 Pencils
	// 구현
	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;
	cout << min(((n - 1) / a + 1) * b, ((n - 1) / c + 1) * d);

	return 0;
}
