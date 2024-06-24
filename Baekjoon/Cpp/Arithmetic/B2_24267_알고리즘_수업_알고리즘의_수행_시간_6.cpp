#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24267 알고리즘 수업 - 알고리즘의 수행 시간 6
	// 수학
	long long n;
	cin >> n;
	cout << (n - 2) * (n - 1) * n / 6 << '\n' << 3;

	return 0;
}
