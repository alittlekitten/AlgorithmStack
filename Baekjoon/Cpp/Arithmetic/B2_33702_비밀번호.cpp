#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33702 비밀번호
	// 수학
	int k;
	cin >> k;

	if (k % 2) cout << 8;
	else cout << 0;

	return 0;
}
