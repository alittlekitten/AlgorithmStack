#include <iostream>

using namespace std;

int v[7];
int n, m;

void rep_perm(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; ++i) {
			cout << v[i] << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; ++i) {
		v[cnt] = i;
		rep_perm(cnt + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15651 N과 M(3)
	// 백트래킹
	cin >> n >> m;
	rep_perm(0);

	return 0;
}
