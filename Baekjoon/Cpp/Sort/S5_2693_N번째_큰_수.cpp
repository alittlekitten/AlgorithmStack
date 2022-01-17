#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 2693번 N번째 큰 수 (정렬)
	int t, tmp;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		vector<int> a;
		for (int j = 0; j < 10; ++j) {
			cin >> tmp;
			a.push_back(tmp);
		}
		sort(a.begin(), a.end());
		cout << a[7] << '\n';
		a.clear();
	}
	
	return 0;
}
