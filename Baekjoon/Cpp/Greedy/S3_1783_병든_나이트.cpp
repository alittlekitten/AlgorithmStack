#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1783 병든 나이트
	// 그리디
	int n, m;
	cin >> n >> m;

	if (n == 1) cout << 1;
	else if (n == 2) cout << min(4, (m + 1) / 2);
	else if (m < 7) cout << min(4, m);
	else cout << m - 2;

	return 0;
}
