#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25881 Electric Bill
	// 수학
	int a, b, n, input;
	cin >> a >> b >> n;
	while (n--) {
		cin >> input;
		cout << input << " ";
		if (input <= 1000) cout << input * a << '\n';
		else cout << 1000 * a + (input - 1000) * b << '\n';
	}

	return 0;
}
