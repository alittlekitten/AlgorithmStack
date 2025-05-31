#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1183 약속
	// 정렬
	int n, a, b;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		v.push_back(a - b);
	}
	sort(v.begin(), v.end());
	if (n % 2) cout << 1;
	else cout << v[n / 2] - v[n / 2 - 1] + 1;

	return 0;
}
