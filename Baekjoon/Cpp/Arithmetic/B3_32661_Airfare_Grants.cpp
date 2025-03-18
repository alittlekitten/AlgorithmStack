#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32661 Airfare Grants
	// 수학
	int n, input;;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}
	
	sort(v.begin(), v.end());

	if (v[0] - v[n - 1] / 2 <= 0) cout << 0;
	else cout << v[0] - v[n - 1] / 2;

	return 0;
}
