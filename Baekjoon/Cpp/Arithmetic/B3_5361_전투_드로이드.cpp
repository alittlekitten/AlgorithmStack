#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5361 전투 드로이드
	// 수학
	double cost[5] = { 350.34, 230.9, 190.55, 125.3, 180.9 };
	double tmp;
	int n;
	cin >> n;
	cout << fixed;
	cout.precision(2);
	for (int i = 0; i < n; ++i) {
		double sum = 0;
		for (int j = 0; j < 5; ++j) {
			cin >> tmp;
			sum += cost[j] * tmp;
		}
		cout << "$" << sum << '\n';
	}
	
	return 0;
}
