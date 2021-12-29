#include <iostream>
#include <queue>

using namespace std;

class Item {
public:
	int x;
	int y;
	int h;
	Item(int _x,int _y,int _h) {
		x = _x;
		y = _y;
		h = _h;
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 7569 토마토
	// 기존 토마토에서 높이만 생성된 BFS

	int m, n, h, input;
	bool fin_chk = true;
	int chk_arr[100][100][100] = { 0, }; // 체크용
	int tomato_arr[100][100][100] = { 0, }; // 토마토배열
	int answer = 0;
	queue<Item> q;

	cin >> m >> n >> h;

	// 토마토 초기 상태 설정
	// BFS를 위해 이미 익은 친구들 queue에 넣어주기
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < m; ++k) {
				cin >> input;
				tomato_arr[i][j][k] = input;
				if (input == 1) q.push(Item(k,j,i));
			}
		}
	}

	while (!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		int z = q.front().h;
		q.pop();
		if (x != 0 && tomato_arr[z][y][x - 1] == 0) {
			chk_arr[z][y][x - 1] = chk_arr[z][y][x] + 1;
			tomato_arr[z][y][x - 1] = 1;
			q.push(Item(x - 1, y, z));
		}
		if (x != m - 1 && tomato_arr[z][y][x + 1] == 0) {
			chk_arr[z][y][x + 1] = chk_arr[z][y][x] + 1;
			tomato_arr[z][y][x + 1] = 1;
			q.push(Item(x + 1, y, z));
		}

		if (y != 0 && tomato_arr[z][y - 1][x] == 0) {
			chk_arr[z][y - 1][x] = chk_arr[z][y][x] + 1;
			tomato_arr[z][y - 1][x] = 1;
			q.push(Item(x, y - 1, z));
		}
		if (y != n - 1 && tomato_arr[z][y + 1][x] == 0) {
			chk_arr[z][y + 1][x] = chk_arr[z][y][x] + 1;
			tomato_arr[z][y + 1][x] = 1;
			q.push(Item(x, y + 1, z));
		}

		if (z != 0 && tomato_arr[z - 1][y][x] == 0) {
			chk_arr[z - 1][y][x] = chk_arr[z][y][x] + 1;
			tomato_arr[z - 1][y][x] = 1;
			q.push(Item(x, y, z - 1));
		}
		if (z != h - 1 && tomato_arr[z + 1][y][x] == 0) {
			chk_arr[z + 1][y][x] = chk_arr[z][y][x] + 1;
			tomato_arr[z + 1][y][x] = 1;
			q.push(Item(x, y, z + 1));
		}
	}

	// 다 끝나고 0 남아있는지 확인
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < m; ++k) {
				if (tomato_arr[i][j][k] == 0) {
					fin_chk = false;
					break;
				}
				else {
					if (chk_arr[i][j][k] > answer) answer = chk_arr[i][j][k];
				}
			}
		}
	}

	if (!fin_chk) answer = -1;
	cout << answer;

	return 0;
}
