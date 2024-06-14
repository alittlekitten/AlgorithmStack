#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30456 바닥수
	// 수학
	int n, l;
	cin >> n >> l;
	for (int i = 0; i < l - 1; ++i) cout << 1;
	cout << n;

	return 0;
}
