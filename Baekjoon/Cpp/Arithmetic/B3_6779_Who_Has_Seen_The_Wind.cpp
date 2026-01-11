#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6779 Who Has Seen The Wind
	// 수학
	int h, m;
	cin >> h >> m;

	for (int t = 1; t <= m; ++t) {
		double a = -6 * pow(t, 4) + h * pow(t, 3) + 2 * pow(t, 2) + t;

		if (a <= 0) {
			cout << "The balloon first touches ground at hour: " << t;
			return 0;
		}
	}

	cout << "The balloon does not touch ground in the given time.";

	return 0;
}
