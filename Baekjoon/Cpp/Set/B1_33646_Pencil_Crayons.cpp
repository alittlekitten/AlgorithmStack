#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33646 Pencil Crayons
	// Set
	int n, k;
	string s;
	set<string> ss;
	cin >> n >> k;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		ss.clear();
		for (int j = 0; j < k; ++j) {
			cin >> s;
			if (ss.count(s)) ++ans;
			else ss.insert(s);
		}
	}
	cout << ans;

	return 0;
}
