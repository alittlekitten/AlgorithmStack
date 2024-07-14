#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31822 재수강
	// 문자열
	string s1, s2;
	int n;
	cin >> s1 >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s2;
		ans += (s1.substr(0, 5) == s2.substr(0, 5));
	}
	cout << ans;
	
	return 0;
}
