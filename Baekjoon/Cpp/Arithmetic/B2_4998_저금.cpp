#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4998 저금
	// 수학
	double n, b, m;
	
	while (cin >> n >> b >> m) {
		int ans = 0;
		while (n <= m) {
			n *= (1 + b * 0.01);
			++ans;
		}
		cout << ans << '\n';
	}
	return 0;
}
