#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25640 MBTI
	// 구현
	string target, s;
	cin >> target;
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (target == s) ++ans;
	}
	cout << ans;
	
	return 0;
}
