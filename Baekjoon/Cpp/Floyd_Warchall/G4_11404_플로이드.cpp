#include <iostream>
#include <algorithm>

using namespace std;
int arr[101][101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11404 플로이드
	// 말 그대로 플로이드와샬
	int n;
	int x, y, c;
	cin >> n;

	// 맨 처음에는 비용의 최댓값보다 크게 설정한다 (INF)
	for (int i = 0; i < 101; ++i) {
		fill(&arr[0][0], &arr[100][101], 10000001); // 넉넉하게 100000*100한거에 1 더한 값을 넣어줌
	}

	// 자기 자신은 0처리
	for (int i = 0; i < 101; ++i) {
		arr[i][i] = 0;
	}

	// 버스의 개수
	int m;
	cin >> m;

	// 직접 연결된 간선 처리
	for (int i = 0; i < m; ++i) {
		cin >> x >> y >> c;
		if (arr[x][y] > c) arr[x][y] = c;
	}

	// 플로이드 와샬
	for (int k = 1; k <= n; ++k) {
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (arr[i][k] + arr[k][j] < arr[i][j]) arr[i][j] = arr[i][k] + arr[k][j];
			}
		}
	}

	// 출력
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (arr[i][j] == 10000001) cout << 0 << " ";
			else cout << arr[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}
