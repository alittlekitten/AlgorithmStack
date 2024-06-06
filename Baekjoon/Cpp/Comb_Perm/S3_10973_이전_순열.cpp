#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10973 이전 순열
	// 수학, 조합론
	int n, input;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}

	if (prev_permutation(v.begin(), v.end())) {
		for (int i = 0; i < n; ++i) cout << v[i] << " ";
	}
	else cout << -1;

	return 0;
}
