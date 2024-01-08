#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8741 이진수 합
	// 수학
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) cout << 1;
	for (int i = 0; i < n - 1; ++i) cout << 0;

	return 0;
}
