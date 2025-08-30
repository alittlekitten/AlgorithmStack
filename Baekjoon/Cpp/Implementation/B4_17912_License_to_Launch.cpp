#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17912 License to Launch
	// 구현
	int n, input;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}

	int target = *min_element(v.begin(), v.end());
	int ans = find(v.begin(), v.end(), target) - v.begin();

	cout << ans;

	return 0;
}
