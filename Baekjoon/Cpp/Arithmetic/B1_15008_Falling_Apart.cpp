#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15008 Falling Apart
	// 수학
	int n, a;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end(), greater<>());

	int x = 0;
	int y = 0;
	for (int i = 0; i < n; ++i) {
		if (i % 2) y += v[i];
		else x += v[i];
	}
	cout << x << " " << y;

	return 0;
}
