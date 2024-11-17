#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8718 Balwanek
	// 수학
	int x, k;
	vector<int> v;
	cin >> x >> k;
	if (7000 * k <= 1000 * x) v.push_back(7000 * k);
	if (3500 * k <= 1000 * x) v.push_back(3500 * k);
	if (1750 * k <= 1000 * x) v.push_back(1750 * k);
	sort(v.begin(), v.end(), greater<>());
	if (v.size() == 0) cout << 0;
	else cout << v[0];

	return 0;
}
