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

	// 3036 링
	// 수학, 유클리드 호제법
	int n;
	int arr[101] = { 0 };
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> arr[i];
	for (int i = 1; i < n; ++i) cout << arr[0] / gcd(arr[0], arr[i]) << "/" << arr[i] / gcd(arr[0], arr[i]) << '\n';

	return 0;
}
