#include <iostream>
#include <queue>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 16928 뱀과 사다리 게임
	// bfs
	
	queue<int> q; // 주사위
	int chk[101] = { 0 }; // 몇번째에 방문했는지
	map<int, int> move; // 뱀 혹은 사다리

	// 출발~
	q.push(1);
	chk[1] = 0;

	int n, m, input1, input2, tmp;
	cin >> n >> m;

	// 사다리
	for (int i = 0; i < n; ++i) {
		cin >> input1 >> input2;
		move[input1] = input2;
	}
	// 뱀
	for (int i = 0; i < m; ++i) {
		cin >> input1 >> input2;
		move[input1] = input2;
	}


	while (1) {
		tmp = q.front(); // 새로운 위치 추가
		q.pop();
		if (tmp == 100) break; // 게임 종료 조건
		for (int i = 1; i <= 6; ++i) { // 주사위의 면은 6개 -> 경로는 총 6개까지 나올 수 있음!
			if (move[tmp + i] && !chk[move[tmp + i]]) { // 사다리나 뱀이 있고, 아직 한번도 안 간 곳이면 푸시
				if (move[tmp + i] == 1) continue;
				q.push(move[tmp + i]);
				chk[move[tmp + i]] = chk[tmp] + 1;
			}
			else if (!move[tmp + i] && !chk[tmp + i]) { // 사다리나 뱀이 없고 아직 한번도 안간 곳이면 푸시
				q.push(tmp + i);
				chk[tmp + i] = chk[tmp] + 1;
			}
		}
	}

	cout << chk[tmp];

	return 0;
}
