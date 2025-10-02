#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34400 민규의 서카디안 리듬
	// 수학
	int n, t;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		if (t % 25 >= 17) cout << "OFFLINE" << '\n';
		else cout << "ONLINE" << '\n';
	}

	return 0;
}
