#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25812 Nice Raises
	// 수학
	int n, r, input;
	cin >> n >> r;

	int fixed = 0;
	int doubled = 0;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input < r) ++fixed;
		else if (input > r) ++doubled;
	}

	if (fixed > doubled) cout << 1;
	else if (doubled > fixed) cout << 2;
	else cout << 0;

	return 0;
}
