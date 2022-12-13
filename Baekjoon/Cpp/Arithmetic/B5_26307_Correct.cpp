#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26307 Correct
	// 수학
	int h, m;
	cin >> h >> m;
	cout << (h - 9) * 60 + m;

	return 0;
}
