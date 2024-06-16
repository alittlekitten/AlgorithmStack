#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31738 매우 어려운 문제
	// 수학
	long long n, m;
	cin >> n >> m;
	long long ans = 1;

	// i가 m보다 커지는 순간 %가 의미가 없어지므로 i <= m 조건도 추가해야한다
	for (long long i = 2; i <= n && i <= m; ++i) ans = ans * i % m;

	cout << ans;

	return 0;
}
