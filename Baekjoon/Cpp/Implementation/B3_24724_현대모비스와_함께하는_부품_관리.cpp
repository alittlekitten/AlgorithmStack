#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24724 현대모비스와 함께하는 부품 관리
	// 구현
	int t, n, a, b, u, v;
	cin >> t;
	for (int i = 1; i <= t; ++i) {
		cin >> n >> a >> b;
		while (n--) cin >> u >> v;
		cout << "Material Management " << i << '\n';
		cout << "Classification ---- End!" << '\n';
	}

	return 0;
}
