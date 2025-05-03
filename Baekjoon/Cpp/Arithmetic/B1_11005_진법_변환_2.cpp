#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11005 진법 변환 2
	// 수학
	int n, b;
	int d = 0;
	char ans[32];
	string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin >> n >> b;
	while (n) {
		ans[d++] = s[n % b];
		n /= b;
	}

	for (int i = d - 1; i >= 0; --i) cout << ans[i];

	return 0;
}
