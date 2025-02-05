#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27512 스네이크
	// 수학, 애드 혹
	int n, m;
	cin >> n >> m;
	if (n % 2 == 0 || m % 2 == 0) cout << n * m;
	else cout << n * m - 1;

	return 0;
}
