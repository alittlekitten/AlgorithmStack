#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15122 Forbidden Zero
	// 브루트포스
	int n;
	cin >> n;
	int ans = 1111111;
	for (int i = n + 1; i < 1000000; ++i) {
		if (to_string(i).find("0") == string::npos) {
			ans = i;
			break;
		}
	}
	cout << ans;

	return 0;
}
