#include <iostream>
using namespace std;

int arr[101][101]; // 플와용 배열
int route[101][101]; // 이전 경로를 담은 배열
int cnt;

void getCost(int i, int j) {
	// cnt에 경로 수 추가
	if (route[i][j] != 10000001) {
		cnt++;
		getCost(i, route[i][j]);
		getCost(route[i][j], j);
	}
}

void getRoute(int i, int j) {
	// 사이에 들어가는 경로 출력
	if (route[i][j] != 10000001) {
		getRoute(i, route[i][j]);
		cout << route[i][j] << " ";
		getRoute(route[i][j], j);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	// 11404 플로이드
	// 말 그대로 플로이드와샬
	int n, m;
	int x, y, c;
	cin >> n >> m;

	// 맨 처음에는 비용의 최댓값보다 크게 설정한다 (INF)
	for (int i = 0; i < 101; ++i) {
		fill(&arr[0][0], &arr[100][101], 10000001); // 넉넉하게 100000*100한거에 1 더한 값을 넣어줌
		fill(&route[0][0], &route[100][101], 10000001); // 넉넉하게 100000*100한거에 1 더한 값을 넣어줌
	}

	// 자기 자신은 0처리
	for (int i = 0; i < 101; ++i) {
		arr[i][i] = 0;
	}

	// 직접 연결된 간선 처리
	for (int i = 0; i < m; ++i) {
		cin >> x >> y >> c;
		if (arr[x][y] > c) arr[x][y] = c;
	}

	// 플로이드 와샬
	for (int k = 1; k <= n; ++k) {
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (arr[i][k] + arr[k][j] < arr[i][j]) {
					arr[i][j] = arr[i][k] + arr[k][j];
					route[i][j] = k;
				}
			}
		}
	}

	// 전체 경로 출력
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (arr[i][j] == 10000001) cout << 0 << " ";
			else cout << arr[i][j] << " ";
		}
		cout << '\n';
	}

	// 경로 출력
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			// 경로가 없으면 0
			if (arr[i][j] == 10000001 || i == j) {
				cout << 0 << "\n";
			}
			else {
				// 최소 2번
				cnt = 2;
				getCost(i, j);
				cout << cnt << " " << i << " ";

				// 경로찾기
				getRoute(i, j);
				cout << j << "\n";
			}
		}
	}

    return 0;
}
