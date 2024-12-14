#include <iostream>
using namespace std;

long long arr[4000001];
long long pow(long long a, long long b) {
	if (b == 0) return 1;
	if (b % 2) return (a * pow(a, b - 1) % 1000000007) % 1000000007;
	else return pow((a * a) % 1000000007, b / 2) % 1000000007;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13977 이항 계수와 쿼리
	// 수학, 정수론
	int m, n, k;
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= 4000000; ++i) {c
		arr[i] = arr[i - 1] * i % 1000000007;
	}

	cin >> m;
	while (m--) {
		cin >> n >> k;
		cout << arr[n] * pow(arr[n - k] * arr[k] % 1000000007, 1000000007 - 2) % 1000000007 << '\n';
	}

	return 0;
}
