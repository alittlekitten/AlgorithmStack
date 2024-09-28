#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11931 수 정렬하기 4
	// 정렬
	int n, input;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end(), greater<>());

	for (int i = 0; i < n; ++i) cout << v[i] << '\n';

	return 0;
}
