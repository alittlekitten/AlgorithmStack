#include <iostream>
using namespace std;

int arr[401][401]; // 플와용 배열

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	// 11404 플로이드
	// 말 그대로 플로이드와샬
	int n, k, s;
	int x, y;
	cin >> n >> k;

	// 직접 연결된 간선 처리
	for (int i = 0; i < k; ++i) {
		cin >> x >> y;
		arr[x][y] = 1;
	}

	// 플로이드 와샬
	for (int k = 1; k <= n; ++k) {
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (arr[i][k] && arr[k][j]) {
					arr[i][j] = 1;
				}
			}
		}
	}

	// 순서유추
	cin >> s;
	for (int i = 0; i < s; ++i) {
		cin >> x >> y;
		if (arr[x][y] && !arr[y][x]) cout << -1 << '\n';
		else if (!arr[x][y] && arr[y][x]) cout << 1 << '\n';
		else cout << 0 << '\n';
	}

    return 0;
}
