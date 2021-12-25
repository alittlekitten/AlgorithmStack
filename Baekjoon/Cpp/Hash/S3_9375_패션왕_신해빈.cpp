#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// hash
	int t, n;
	string input1, input2;
	unordered_map<string, int> m;
	vector<string> v;

	cin >> t;
	for (int i = 0; i < t; ++i) {
		int answer = 1;
		m.clear();
		v.clear();
		cin >> n;
		for (int j = 0; j < n; ++j) {
			cin >> input1 >> input2;
			if (find(v.begin(), v.end(), input2) == v.end()) v.push_back(input2);
			m[input2]++;
		}
		for (int j = 0; j < v.size(); ++j) {
			answer *= (m[v[j]] + 1);
		}
		cout << answer - 1 << '\n';
	}

	return 0;
}
