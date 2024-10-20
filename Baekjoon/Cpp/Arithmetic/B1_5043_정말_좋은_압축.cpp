#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5043 정말 좋은 압축
	// 수학
	long long n;
	int b;
	cin >> n >> b;

	long long ans = 1;

	for (int i = 1; i <= b; ++i) ans += 1LL << i;

	if (ans >= n) cout << "yes";
	else cout << "no";

	return 0;
}
