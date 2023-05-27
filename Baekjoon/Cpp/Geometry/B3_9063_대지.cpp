#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9063 대지
	// 기하학, 수학
	int n, x, y;
	cin >> n;
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		v1.push_back(x);
		v2.push_back(y);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	cout << (v1[n - 1] - v1[0]) * (v2[n - 1] - v2[0]);

	return 0;
}
