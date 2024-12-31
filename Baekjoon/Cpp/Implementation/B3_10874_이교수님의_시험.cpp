#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10874 이교수님의 시험
	// 구현
	int n;
	int arr[10] = { 0 };
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		bool chk = true;
		for (int j = 0; j < 10; ++j) {
			cin >> arr[j];
			if (arr[j] - 1 != j % 5) chk = false;
		}
		if (chk) cout << i + 1 << '\n';
	}

	return 0;
}
