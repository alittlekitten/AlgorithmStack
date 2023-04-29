#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 9286 Gradabase
	// 구현
	int t, n, input;
	vector<int> v;
	cin >> t;
	for (int i = 1; i <= t; ++i) {
		v.clear();
		cin >> n;
		for (int j = 0; j < n; ++j) {
			cin >> input;
			if (input != 6) v.push_back(input + 1);
		}
		cout << "Case " << i << ":\n";
		for (int j = 0; j < v.size(); ++j) cout << v[j] << '\n';
	}

	return 0;
}
