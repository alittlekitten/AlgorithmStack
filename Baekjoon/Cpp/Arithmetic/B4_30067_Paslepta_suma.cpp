#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30067 Paslėpta suma
	// 수학
	int n;
	int ans = 0;

	for (int i = 0; i < 10; ++i) {
		cin >> n;
		ans += n;
	}

	cout << ans / 2;

	return 0;
}
