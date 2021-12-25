#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1389, bfs(그래프, 플로이드 와샬)
	int n, m, input1, input2;
	bool arr[101][101] = { false, };
	int kb[101];
	queue<pair<int, int>> q;
	cin >> n >> m;
	
	for (int i = 0; i < m; ++i) { // 연결관계 등록
		cin >> input1 >> input2;
		arr[input1][input2] = true;
		arr[input2][input1] = true;
	}

	// 케빈베이컨 확인작업
	for (int i = 1; i <= n; ++i) {
		int sum = 0; // i의 케빈 베이컨
		for (int j = 1; j <= n; ++j) {
			int cnt_arr[101] = { 0, }; // 각 노드에 도달하기 위한 횟수 저장용 배열
			if (i == j) continue; // 자기 자신인 경우 제외
			while (!q.empty()) q.pop(); // 큐 비우기
			for (int k = 1; k <= n; ++k) { // 초기값 설정
				if (arr[i][k] == true) q.push(make_pair(i, k));
			}
			while (!q.empty()) { // BFS 작동
				int first = q.front().first;
				int second = q.front().second;
				q.pop();
				if (second == i) continue; // 자기 자신으로 돌아가는 케이스 제외
				else if (second == j) { // 정답을 찾았을 때
					sum += cnt_arr[first] + 1;
					break;
				}
				else { // 정답을 못 찾았을 때
					if (!cnt_arr[second]) cnt_arr[second] = cnt_arr[first] + 1; // 처음으로 방문했다면 몇번에 거쳐서 방문했는지 표시 (bfs이므로 항상 제일 빠른도달횟수가 저장)
					for (int l = 1; l <= n; ++l) { // 방문할 수 있는 점에 방문(큐에 저장)
						if (arr[second][l] == true && !cnt_arr[l] && l != i) q.push(make_pair(second, l));
					}
				}
			}
		}
		kb[i] = sum;
	}

	// 케빈 베이컨이 가장 작은 사람 찾기 (최솟값이 여러명이면 번호가 가장 적은 사람 출력)
	int min = 100;
	int min_user;
	for (int i = 1; i <= n; ++i) {
		if (min > kb[i]) {
			min_user = i;
			min = kb[i];
		}
	}
	cout << min_user;
	
	return 0;
}
