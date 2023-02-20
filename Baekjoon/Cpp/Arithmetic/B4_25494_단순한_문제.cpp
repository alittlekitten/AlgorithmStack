#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25494 단순한 문제
	// 수학
	int t, a, b, c;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> a >> b >> c;
		cout << min(a, min(b, c)) << '\n';
	}
	
	return 0;
}
