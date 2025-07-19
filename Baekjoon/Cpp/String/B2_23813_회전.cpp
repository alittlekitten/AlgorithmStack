#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23813 회전
	// 문자열
	string n;
	cin >> n;

	long long ans = 0;
	for (int i = 0; i < n.size(); ++i) {
		n = n.back() + n.substr(0, n.size() - 1);
		ans += stoll(n);
	}
	cout << ans;

	return 0;
}
