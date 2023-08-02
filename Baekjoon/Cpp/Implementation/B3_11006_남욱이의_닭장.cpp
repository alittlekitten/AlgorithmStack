#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11006 남욱이의 닭장
	// 구현
	int t, n, m;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		int u = 2 * m - n;
		int t = m - u;
		cout << u << " " << t << '\n';
	}

	return 0;
}
