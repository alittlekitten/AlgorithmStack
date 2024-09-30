#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (!b) return a;
	else return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14490 백대열
	// 수학
	int n, m;
	scanf("%d:%d", &n, &m);
	int tmp = gcd(n, m);
	cout << n / tmp << ":" << m / tmp;

	return 0;
}
