#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30821 별자리가 될 수 있다면
	// 수학
	long long n;
	cin >> n;
	cout << n * (n - 1) * (n - 2) * (n - 3) * (n - 4) / 120;

	return 0;
}
