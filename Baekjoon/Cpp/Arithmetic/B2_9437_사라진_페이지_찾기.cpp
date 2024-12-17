#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9437 사라진 페이지 찾기
	// 수학
	int n, p;
	vector<int> v;
	while (1) {
		v.clear();
		cin >> n;
		if (n == 0) break;
		cin >> p;

		v.push_back(p % 2 ? p + 1 : p - 1);
		v.push_back(p % 2 ? n - p : n - p + 1);
		v.push_back(p % 2 ? n - p + 1 : n - p + 2);

		sort(v.begin(), v.end());

		for (int i = 0; i < v.size(); ++i) cout << v[i] << " ";
		cout << '\n';
	}

	return 0;
}
