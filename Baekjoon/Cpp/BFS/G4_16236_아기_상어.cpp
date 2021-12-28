#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>


using namespace std;

class Food {
public:
	int x;
	int y;
	int move;
};

bool cmp(const Food &a, const Food &b) {
	if (a.move == b.move) {
		if (a.y == b.y) return a.x < b.x;
		else return a.y < b.y;
	}
	return a.move < b.move;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 16236 BFS
	// 쭉 확인해서 가장 가까운 요소 - 높은 요소 - 왼쪽에 있는 요소 순으로 이동하면서 먹이를 먹을 수 있도록 구현
	// 이동할 수 있는 모든 경로를 확인하고 최소를 찾아서 이동
	
	int n, input;
	int arr[20][20] = { 0, };
	queue<pair<int, int>> q;
	pair<int, int> p; // 원래 상어 위치를 담은 좌표
	int chk[20][20] = { 0, }; // 지나갔는지 여부(+ 시간)

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> input;
			arr[i][j] = input;
			if (input == 9) {
				q.push(make_pair(j, i));
				p = make_pair(j, i);
			}
		}
	}
	
	int baby = 2;
	int food_stack = 0;
	int full_time = 0;
	bool first = true;
	vector<Food> v;
	
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		if (first == true) chk[y][x] = 9999; // 첫번째 요소임을 확인
		first = false;
		q.pop();

		// 위
		if (y > 0 && (arr[y - 1][x] == baby || arr[y - 1][x] == 0) && !chk[y - 1][x]) {
			q.push(make_pair(x, y - 1));
			if (chk[y][x] == 9999) chk[y - 1][x] = 1;
			else chk[y - 1][x] = chk[y][x] + 1;
		}
		if (y > 0 && arr[y - 1][x] < baby && arr[y - 1][x] != 0 && !chk[y - 1][x]) {
			if (chk[y][x] == 9999) chk[y - 1][x] = 1;
			else chk[y - 1][x] += chk[y][x] + 1;
			Food tmp;
			tmp.x = x;
			tmp.y = y - 1;
			if (chk[y][x] == 9999) tmp.move = 1;
			else tmp.move = chk[y][x] + 1;
			v.push_back(tmp);
			q.push(make_pair(x, y - 1));
		}

		// 왼쪽
		if (x > 0 && (arr[y][x - 1] == baby || arr[y][x - 1] == 0) && !chk[y][x - 1]) {
			q.push(make_pair(x - 1, y));
			if (chk[y][x] == 9999) chk[y][x - 1] = 1;
			else chk[y][x - 1] = chk[y][x] + 1;
		}
		if (x > 0 && arr[y][x - 1] < baby && arr[y][x - 1] != 0 && !chk[y][x - 1]) {
			if (chk[y][x] == 9999) chk[y][x - 1] = 1;
			else chk[y][x - 1] += chk[y][x] + 1;
			Food tmp;
			tmp.x = x - 1;
			tmp.y = y;
			if (chk[y][x] == 9999) tmp.move = 1;
			else tmp.move = chk[y][x] + 1;
			v.push_back(tmp);
			q.push(make_pair(x - 1, y));
		}

		// 오른쪽
		if (x < n - 1 && (arr[y][x + 1] == baby || arr[y][x + 1] == 0) && !chk[y][x + 1]) {
			q.push(make_pair(x + 1, y));
			if (chk[y][x] == 9999) chk[y][x + 1] = 1;
			else chk[y][x + 1] = chk[y][x] + 1;
		}
		if (x < n - 1 && arr[y][x + 1] < baby && arr[y][x + 1] != 0 && !chk[y][x + 1]) {
			if (chk[y][x] == 9999) chk[y][x + 1] = 1;
			else chk[y][x + 1] += chk[y][x] + 1;
			Food tmp;
			tmp.x = x + 1;
			tmp.y = y;
			if (chk[y][x] == 9999) tmp.move = 1;
			else tmp.move = chk[y][x] + 1;
			v.push_back(tmp);
			q.push(make_pair(x + 1, y));
		}

		// 아래
		if (y < n - 1 && (arr[y + 1][x] == baby || arr[y + 1][x] == 0) && !chk[y + 1][x]) {
			q.push(make_pair(x, y + 1));
			if (chk[y][x] == 9999) chk[y + 1][x] = 1;
			else chk[y + 1][x] = chk[y][x] + 1;
		}
		if (y < n - 1 && arr[y + 1][x] < baby && arr[y + 1][x] != 0 && !chk[y + 1][x]) {
			if (chk[y][x] == 9999) chk[y + 1][x] = 1;
			else chk[y + 1][x] += chk[y][x] + 1;
			Food tmp;
			tmp.x = x;
			tmp.y = y + 1;
			if (chk[y][x] == 9999) tmp.move = 1;
			else tmp.move = chk[y][x] + 1;
			v.push_back(tmp);
			q.push(make_pair(x, y + 1));
		}

		// 음식을 먹은 경우 처리
		if (q.empty() && !v.empty()) {
			sort(v.begin(), v.end(), cmp);
			int food_x = v[0].x;
			int food_y = v[0].y;
			int food_move = v[0].move;

			food_stack++;
			if (food_stack == baby) {
				baby++;
				food_stack = 0;
			}

			full_time += chk[food_y][food_x];
			memset(chk, 0, sizeof(chk));
			while (!q.empty()) q.pop();
			q.push(make_pair(food_x, food_y));
			first = true;
			arr[p.second][p.first] = 0; // 아까 아기상어가 있던 자리 0으로 처리
			p = make_pair(food_x, food_y);
			arr[food_y][food_x] = 9; // 새로운 아기상어자리를 9로 변경
			v.clear();

			/*
			// 먹은 결과 표시
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
			*/
		}

	}

	cout << full_time;
	
	
	return 0;
}
