#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34891 MT 준비
	// 수학
	int n, m;
	cin >> n >> m;
	if (n % m) cout << n / m + 1;
	else cout << n / m;

	return 0;
}
