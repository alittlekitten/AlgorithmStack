#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11648 지속
	// 수학
	int n;
	cin >> n;
	int cnt = 0;
	int res = 1;
	if (n < 10) cout << cnt;
	else {
		while (n >= 10) {
			while (n) {
				res *= n % 10;
				n /= 10;
			}
			n = res;
			res = 1;
			++cnt;
		}
		cout << cnt;
	}

	return 0;
}
