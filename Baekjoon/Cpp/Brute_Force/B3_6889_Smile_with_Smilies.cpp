#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6889 Smile with Similes
	// 브루트포스
	int n, m;
	string s1[5];
	string s2[5];
	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> s1[i];
	for (int i = 0; i < m; ++i) cin >> s2[i];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << s1[i] << " as " << s2[j] << '\n';
		}
	}

	return 0;
}
