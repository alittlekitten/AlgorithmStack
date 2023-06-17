#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10395 Automated Checking Machine
	// 구현
	int a[5];
	char ans = 'Y';
	for (int i = 0; i < 5; ++i) cin >> a[i];
	for (int i = 0, x; i < 5; ++i) {
		cin >> x;
		if (a[i] == x) ans = 'N';
	}
	cout << ans;

	return 0;
}
