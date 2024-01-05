#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23251 스물셋
	// 수학
	int t, k;
	cin >> t;
	while (t--) {
		cin >> k;
		cout << 23 * k << '\n';
	}

	return 0;
}
