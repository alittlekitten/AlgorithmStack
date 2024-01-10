#include <iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i < n; ++i) {
		if (!(n % i)) return false;
	}
	return true;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 7789 텔레프라임
	// 정수론
	int phone, n;
	cin >> phone >> n;
	if (isPrime(phone) && isPrime(n * 1000000 + phone)) cout << "Yes";
	else cout << "No";

	return 0;
}
