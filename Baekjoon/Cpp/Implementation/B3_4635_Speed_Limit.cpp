#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4635 Speed Limit
	// 수학
	int n;
	int s, t;
	while (1) {
		cin >> n;
		if (n == -1) break;
		int totalTime = 0;
		int totalMiles = 0;
		for (int i = 0; i < n; ++i) {
			cin >> s >> t;
			totalMiles += s * (t - totalTime);
			totalTime = t;
		}
		cout << totalMiles << " miles" << '\n';
	}

	return 0;
}
