#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28135 Since 1973
	// 구현
	int n;
	int ans = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		if (to_string(i).find("50") == string::npos) ++ans;
		else ans += 2;
	}

	cout << ans;

	return 0;
}
