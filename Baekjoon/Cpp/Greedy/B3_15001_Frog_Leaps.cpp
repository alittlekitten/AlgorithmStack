#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15001 Frog Leaps
	// 그리디
	long long n, tmp, x;
	cin >> n >> tmp;
	--n;

	long long ans = 0;
	while (n--) {
		cin >> x;
		ans += (x - tmp) * (x - tmp);
		tmp = x;
	}

	cout << ans;

	return 0;
}
