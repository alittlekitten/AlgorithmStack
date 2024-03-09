#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8815 Test
	// 수학
	int z, n;
	char c[4] = { 'A', 'B', 'C', 'D' };

	cin >> z;
	while (z--) {
		cin >> n;
		int nextCnt = (n - 1) / 3;
		int left = (n - 1) % 3;
		cout << c[(nextCnt + left) % 4] << '\n';
	}

	return 0;
}
