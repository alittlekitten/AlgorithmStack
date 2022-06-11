#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23037 5의 수난
	// 수학
	string s;
	int ans = 0;
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		ans += pow(s[i] - '0', 5);
	}
	cout << ans;

	return 0;
}
