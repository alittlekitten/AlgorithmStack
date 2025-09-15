#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34346 대각선
	// 애드 혹
	int n;
	cin >> n;

	if (n % 2) cout << 1;
	else cout << 2;

	return 0;
}
