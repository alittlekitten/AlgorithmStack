#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13333 Q-인덱스
	// 브루트포스
	int n, input;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());

	int ans = 0;
	for (int k = 0; k <= n; ++k) {
		for (int i = 0; i < n; ++i) {
			// k번 이상 인용된 논문이 k편 이상이면서 k번 이하의 인용횟수를 가진 논문이 n-k편 이상
			if (v[i] >= k && i <= n - k && n - i >= k) {
				ans = k;
				break;
			}
		}
	}

	cout << ans;

	return 0;
}
