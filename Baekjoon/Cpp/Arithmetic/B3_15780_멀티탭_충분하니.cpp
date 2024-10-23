#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15780 멀티탭 충분하니?
	// 수학
	int n, k, input;
	int sum = 0;
	cin >> n >> k;
	for (int i = 0; i < k; ++i) {
		cin >> input;
		if (input % 2 == 0) sum += input / 2;
		else sum += input / 2 + 1;
	}

	if (sum >= n) cout << "YES";
	else cout << "NO";

	return 0;
}
