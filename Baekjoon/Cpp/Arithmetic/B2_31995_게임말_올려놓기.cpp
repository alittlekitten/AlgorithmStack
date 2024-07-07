#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31995 게임말 올려놓기
	// 수학
	int n, m;
	cin >> n >> m;
	cout << 2 * (n - 1) * (m - 1);

	return 0;
}
