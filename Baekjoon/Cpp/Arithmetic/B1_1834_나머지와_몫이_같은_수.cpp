#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1834 나머지와 몫이 같은 수
	// 수학
	long long n;
	long long ans = 0;
	cin >> n;
	for (long long i = 1; i < n; ++i) ans += (n + 1) * i;
	cout << ans;

	return 0;
}
