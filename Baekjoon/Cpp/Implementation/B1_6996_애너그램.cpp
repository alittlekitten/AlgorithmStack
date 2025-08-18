#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6996 애너그램
	// 구현
	int t;
	string a, b, aa, bb;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> a >> b;
		aa = a;
		bb = b;

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		if (a == b) cout << aa << " & " << bb << " are anagrams.";
		else cout << aa << " & " << bb << " are NOT anagrams.";

		cout << '\n';
	}

	return 0;
}
