#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13241 최소공배수
	// 수학
	long long a, b;
	cin >> a >> b;

	cout << a * b / gcd(a, b);

	return 0;
}
