#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27325 3 つの箱 (Three Boxes)
	// 구현
	int n;
	int arr[101] = { 0 };
	string s;
	cin >> n >> s;

	int tmp = 1; // 공 든 상자
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == 'L') {
			if (tmp > 1) --tmp;
		}
		else {
			if (tmp < 3) ++tmp;
			if (tmp == 3) ++ans;
		}
	}

	cout << ans;

	return 0;
}
