#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9237 이장님 초대
	// 그리디
	int n, input;
	vector<int> v;
	int ans = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end(), greater<>());
	
	for (int i = 0; i < n; ++i) ans = max(ans, v[i] + i + 1);
	cout << ans + 1;

	return 0;
}
