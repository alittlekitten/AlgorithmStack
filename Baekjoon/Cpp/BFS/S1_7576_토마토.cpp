#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 매번 for문 돌려가면서 확인하기
	// 체크용 배열 하나 만들어서 이미 한번 지나간 곳은 다시 지나가지 않도록 구현
	// BFS.. 안하니까 40%에서 시간초과 터진다..

	int m, n, input;
	bool fin_chk = true;
	int chk_arr[1000][1000] = { 0, };
	int tomato_arr[1000][1000] = { 0, };
	int answer = 0;
	queue<pair<int, int>> q;

	cin >> m >> n;

	// 토마토 초기 상태 설정
	// BFS를 위해 이미 익은 친구들 queue에 넣어주기
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> input;
			tomato_arr[i][j] = input;
			if (input == 1) q.push(make_pair(i, j));
		}
	}
	
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		if (x != 0 && tomato_arr[x - 1][y] == 0) {
			chk_arr[x - 1][y] = chk_arr[x][y] + 1;
			tomato_arr[x - 1][y] = 1;
			q.push(make_pair(x - 1, y));
		}
		if (y != 0 && tomato_arr[x][y - 1] == 0) {
			chk_arr[x][y - 1] = chk_arr[x][y] + 1;
			tomato_arr[x][y - 1] = 1;
			q.push(make_pair(x, y - 1));
		}
		if (x != n-1 && tomato_arr[x + 1][y] == 0) {
			chk_arr[x + 1][y] = chk_arr[x][y] + 1;
			tomato_arr[x + 1][y] = 1;
			q.push(make_pair(x + 1, y));
		}
		if (y != m-1 && tomato_arr[x][y + 1] == 0) {
			chk_arr[x][y + 1] = chk_arr[x][y] + 1;
			tomato_arr[x][y + 1] = 1;
			q.push(make_pair(x, y+1));
		}
	}

	// 다 끝나고 0 남아있는지 확인
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (tomato_arr[i][j] == 0) {
				fin_chk = false;
				break;
			}
			else {
				if (chk_arr[i][j] > answer) answer = chk_arr[i][j];
			}
		}
	}

	if (!fin_chk) answer = -1;
	cout << answer;

	return 0;
}
