#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31473 하늘과 핑크
	// 수학
	int n, input;
	int a = 0;
	int b = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		a += input;
	}

	for (int i = 0; i < n; ++i) {
		cin >> input;
		b += input;
	}

	cout << b << " " << a;

	return 0;
}
