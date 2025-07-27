#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25379 피하자
	// 그리디
	long long n, input;
	cin >> n;

	long long tmp[2] = { 0 };
	long long ans[2] = { 0 };
	for (int i = 0; i < n; ++i) {
		cin >> input;
		++tmp[input % 2];
		if (input % 2) ans[0] += tmp[0];
		else ans[1] += tmp[1];
	}

	if (ans[0] > ans[1]) cout << ans[1];
	else cout << ans[0];

	return 0;
}
