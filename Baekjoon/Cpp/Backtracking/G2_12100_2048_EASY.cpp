#include <iostream>
#include <vector>

using namespace std;
int arr[21][21];
int n;
int order[5];
int tmp[21][21];
int maxV = 0;

void move(int dir) {
	// 줄별로 벡터에 넣어서 이어진게 같으면 넣기
	vector<int> v;
	// 상 (세로줄 단위로 처리)
	if (dir == 0) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (tmp[j][i]) v.push_back(tmp[j][i]);
				tmp[j][i] = 0;
			}
			int idx = 0; // 인덱스
			for (int j = 0; j < v.size(); ++j) {
				if (j + 1 < v.size() && v[j] == v[j + 1]) tmp[idx][i] = v[j++] * 2;
				else tmp[idx][i] = v[j];
				idx++;
			}
			v.clear();
		}
	}
	// 우 (가로줄 단위로 처리)
	else if (dir == 1) {
		for (int i = 0; i < n; ++i) {
			for (int j = n - 1; j >= 0; --j) {
				if (tmp[i][j]) v.push_back(tmp[i][j]);
				tmp[i][j] = 0;
			}
			int idx = n - 1;
			for (int j = 0; j < v.size(); ++j) {
				if (j + 1 < v.size() && v[j] == v[j + 1]) tmp[i][idx] = v[j++] * 2;
				else tmp[i][idx] = v[j];
				idx--;
			}
			v.clear();
		}
	}
	// 하 (세로줄 단위로 처리)
	else if (dir == 2) {
		for (int i = 0; i < n; ++i) {
			for (int j = n - 1; j >= 0; --j) {
				if (tmp[j][i]) v.push_back(tmp[j][i]);
				tmp[j][i] = 0;
			}
			int idx = n - 1;
			for (int j = 0; j < v.size(); ++j) {
				if (j + 1 < v.size() && v[j] == v[j + 1]) tmp[idx][i] = v[j++] * 2;
				else tmp[idx][i] = v[j];
				idx--;
			}
			v.clear();
		}
	}
	// 좌 (가로줄 단위로 처리)
	else if (dir == 3) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (tmp[i][j]) v.push_back(tmp[i][j]);
				tmp[i][j] = 0;
			}
			int idx = 0;
			for (int j = 0; j < v.size(); ++j) {
				if (j + 1 < v.size() && v[j] == v[j + 1]) tmp[i][idx] = v[j++] * 2;
				else tmp[i][idx] = v[j];
				idx++;
			}
			v.clear();
		}
	}
}

void dfs(int cnt) {
	if (cnt == 5) {
		// map복사
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				tmp[i][j] = arr[i][j];
			}
		}
		// 이동
		for (int i = 0; i < 5; ++i) move(order[i]);
		// 최댓값뽑기
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (maxV < tmp[i][j]) maxV = tmp[i][j];
			}
		}
		return;
	}
	else {
		// cnt가 5가 아니면 상우하좌(0, 1, 2, 3)로 이동
		for (int i = 0; i < 4; ++i) {
			order[cnt] = i;
			dfs(cnt + 1);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 12100 2048(Easy)
	// 백트래킹, 시뮬레이션

	// 입력값 받기
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> arr[i][j];
		}
	}

	dfs(0);
	cout << maxV;

	return 0;
}
