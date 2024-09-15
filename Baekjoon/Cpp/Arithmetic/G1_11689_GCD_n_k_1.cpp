#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11689 GCD(n, k) = 1
	// 수학, 오일러 피 함수
	// 양의 정수 n에 대해 n과 서로소인 n 이하의 자연수의 개수를 세는 함수
	long long n;
	cin >> n;
	long long ans = n;
	for (long long i = 2; i * i <= n; i++) {
		if (!(n % i)) {
			ans -= ans / i;
			while (!(n % i)) n /= i;
		}
	}
	if (n > 1) ans -= ans / n;

	cout << ans;

	return 0;
}
