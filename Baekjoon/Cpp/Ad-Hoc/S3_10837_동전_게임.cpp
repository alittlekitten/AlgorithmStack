#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10837 동전 게임
	// 수학, 애드혹
	int k, c, m, n;
	cin >> k >> c;
	for (int i = 0; i < c; ++i) {
		cin >> m >> n;

		// 둘이 같으면 무조건 가능
		if (m == n) cout << 1 << '\n';

		// 선공이 지는 케이스는 m, n-1인 상태에서 동점을 만들 수 있는지 판단
		// k + m - 2 * (n - 1) > 0이면 가능
		else if (m < n) cout << (k + m - 2 * (n - 1) > 0) << '\n';

		// 후공이 지는 케이스는 m-1, n인 상태에서 동점을 만들 수 있는지 판단
		// k + n - 2 * (m - 1) 에서 후공은 지고있어도 한번 더 던질 수 있기 때문에 +1을 해준다
		else cout << (k + n - 2 * (m - 1) + 1 > 0) << '\n';
	}

	return 0;
}
