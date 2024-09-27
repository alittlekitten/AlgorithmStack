#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11004 K번째 수
	// 정렬
	int n, k, input;
	cin >> n >> k;
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	cout << v[k - 1];

	return 0;
}
