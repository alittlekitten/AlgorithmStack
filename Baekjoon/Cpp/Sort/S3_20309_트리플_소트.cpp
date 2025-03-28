#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20309 트리플 소트
	// 정렬
	int n, input;
	cin >> n;
	bool chk = false;
	for (int i = 1; i <= n; ++i) {
		cin >> input;
		if (input % 2 != i % 2) {
			chk = true;
			break;
		}
	}
	if (chk) cout << "NO";
	else cout << "YES";

	return 0;
}
