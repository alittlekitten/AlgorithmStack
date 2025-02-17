#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6752 Time on task
	// 그리디, 정렬
	int t, c, input;
	vector<int> v;
	cin >> t >> c;
	for (int i = 0; i < c; ++i) {
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());

	int ans = 0;
	int tmp = 0;
	for (int i = 0; i < c; ++i) {
		if (tmp + v[i] <= t) tmp += v[i];
		else break;
		++ans;
	}
	cout << ans;

	return 0;
}
