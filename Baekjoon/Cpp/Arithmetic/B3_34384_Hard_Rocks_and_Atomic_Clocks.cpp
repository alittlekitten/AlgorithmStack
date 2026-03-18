#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34384 Hard Rocks and Atomic Clocks
	// 수학
	int t;
	cin >> t;
	cout << 60 - (t % 3600) / 60;

	return 0;
}
