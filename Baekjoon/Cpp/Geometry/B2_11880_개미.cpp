#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11880 개미
	// 기하학
	int t, a, b, c;
	cin >> t;
	while (t--) {
		long a, b, c;
		cin >> a >> b >> c;
		cout << max(max(a, b), c) * max(max(a, b), c) + ((min(a, b) + min(max(a, b), c))) * ((min(a, b) + min(max(a, b), c))) << '\n';
	}

	return 0;
}
