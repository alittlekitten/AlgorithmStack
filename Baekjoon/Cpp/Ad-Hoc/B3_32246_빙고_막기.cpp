#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32246 빙고 막기
	// 애드 혹
	int n;
	cin >> n;
	if (n == 2) cout << 3;
	else cout << n;

	return 0;
}
