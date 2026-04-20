#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16018 Occupy parking
	// 문자열
	int n;
	string s1, s2;

	cin >> n >> s1 >> s2;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (s1[i] == 'C' && s2[i] == 'C') ++ans;
	}

	cout << ans;

	return 0;
}
