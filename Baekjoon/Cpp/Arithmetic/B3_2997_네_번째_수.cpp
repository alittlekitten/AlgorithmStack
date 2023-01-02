#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2997 네 번째 수
	// 수학
	int n;
	vector<int> v;
	for (int i = 0; i < 3; ++i) {
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	int d1 = v[1] - v[0];
	int d2 = v[2] - v[1];
	if (d1 > d2) cout << v[0] + d2;
	else if (d1 < d2) cout << v[1] + d1;
	else cout << v[2] + d1;

	return 0;
}    
