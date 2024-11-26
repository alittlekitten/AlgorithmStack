#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16212 정열적인 정렬
	// 정렬
	int n, a;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i) cout << v[i] << " ";

	return 0;
}
