#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4714 Lunacy
	// 수학
	while (1) {
		double x;
		cin >> x;
		if (x < 0) break;
		cout << fixed;
		cout.precision(2);
		cout << "Objects weighing " << x << " on Earth will weigh " << x * 0.167 << " on the moon.\n";
	}

	return 0;
}
