#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8949 대충 더해
	// 수학
	int a, b;
	cin >> a >> b;

	long long maxValue = max(a, b);
	vector<int> v;
	while (maxValue > 0) {
		v.push_back(a % 10 + b % 10);
		a /= 10;
		b /= 10;
		maxValue /= 10;
	}

	for (int i = v.size() - 1; i >= 0; --i) cout << v[i];

	return 0;
}
