#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2605 줄 세우기
	// 구현
	int n, input;
	cin >> n;
	vector<int> v(n);

	for (int i = 1; i <= n; ++i) {
		cin >> input;
		v.insert(v.begin() + input, i);
	}

	for (int i = n - 1; i >= 0; --i) cout << v[i] << " ";
	
	return 0;
}
