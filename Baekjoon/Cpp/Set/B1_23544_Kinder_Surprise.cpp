#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23544 Kinder Surprise
	// 해시, 셋
	int n;
	string s;
	set<string> ss;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> s;
		ss.insert(s);
	}
	cout << n - ss.size();

	return 0;
}
