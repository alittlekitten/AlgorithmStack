#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	while (b != 0) {
		long long tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

long long lcm(long long a, long long b) {
	return a / gcd(a, b) * b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32801 Generalized FizzBuzz
	// 수학
	long long n, a, b;
	cin >> n >> a >> b;

	long long x = n / lcm(a, b);
	long long y = n / a - x;
	long long z = n / b - x;

	cout << y << " " << z << " " << x;

	return 0;
}
