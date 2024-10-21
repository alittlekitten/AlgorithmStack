#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29807 학번을 찾아줘!
	// 수학
	int t;
	cin >> t;
	vector<int> v(5, 0);
	int ans = 0;

	for (int i = 0; i < t; ++i) cin >> v[i];
	
	ans += (v[0] > v[2] ? 508 : 108) * abs(v[0] - v[2]);
	ans += (v[1] > v[3] ? 212 : 305) * abs(v[1] - v[3]);
	ans += v[4] * 707;
	cout << ans * 4763;

	return 0;
}
