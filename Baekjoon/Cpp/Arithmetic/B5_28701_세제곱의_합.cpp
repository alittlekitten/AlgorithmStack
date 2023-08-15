#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28701 세제곱의 합
	// 수학
	int n;
	int a = 0;
	int b = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		a += i;
		b += i * i * i;
	}
	cout << a << '\n' << a * a << '\n' << b;

	return 0;
}
