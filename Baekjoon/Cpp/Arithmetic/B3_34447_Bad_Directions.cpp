#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34447 Bad Directions
	// 수학
	int t, k;
	string n;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> k >> n;
		for (int j = 0; j < n.size(); ++j) {
			cout << ((int)n[j] - '0' + k) % 10;
		}
		cout << '\n';
	}

	return 0;
}
