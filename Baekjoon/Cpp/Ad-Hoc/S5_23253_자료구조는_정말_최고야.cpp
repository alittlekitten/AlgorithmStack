#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23253 자료구조는 정말 최고야
	// 애드혹
	int n, m, k, input;
	cin >> n >> m;

	bool chk = true;
	for (int i = 0; i < m; ++i) {
		cin >> k;
		int tmp = n + 1;
		for (int j = 0; j < k; ++j) {
			cin >> input;
			if (input > tmp) chk = false;
			tmp = input;
		}
	}

	if (chk) cout << "Yes";
	else cout << "No";

	return 0;
}
