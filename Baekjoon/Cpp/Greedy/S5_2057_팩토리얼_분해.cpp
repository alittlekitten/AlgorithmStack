#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2057 팩토리얼 분해
	// 그리디
	long long n;
	cin >> n;

	long long arr[20] = { 0 }; // 1,000,000,000,000,000,000보다 작은 x!에서 x의 값 중 가장 큰 값은 19
	arr[0] = 1;
	for (int i = 1; i < 20; ++i) arr[i] = arr[i - 1] * i;

	if (n == 0) cout << "NO";
	else {
		for (int i = 19; i >= 0; --i) {
			if (n >= arr[i]) n -= arr[i];
		}
		if (n) cout << "NO";
		else cout << "YES";
	}

	return 0;
}
