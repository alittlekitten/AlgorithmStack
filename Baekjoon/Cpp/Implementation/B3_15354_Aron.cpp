#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15354 Aron
	// 구현
	int n;
	char tmp, input;
	cin >> n;

	int ans = 1;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (i == 0 || input != tmp) ++ans;
		tmp = input;
	}

	cout << ans;

	return 0;
}
