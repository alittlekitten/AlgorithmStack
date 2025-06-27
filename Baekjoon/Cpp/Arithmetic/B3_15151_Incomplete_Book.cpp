#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15151 Incomplete Book
	// 수학
	int k, d;
	cin >> k >> d;

	int ans = 0;
	while (d >= 0) {
		d -= k * pow(2, ans);
		++ans;
	}
	cout << ans - 1;

	return 0;
}
