#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9296 Grading Exams
	// 구현
	int n, l;
	string s1, s2;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> l >> s1 >> s2;
		int ans = 0;
		for (int j = 0; j < l; ++j) {
			if (s1[j] != s2[j]) ++ans;
		}

		cout << "Case " << i << ": " << ans << '\n';
	}

	return 0;
}
