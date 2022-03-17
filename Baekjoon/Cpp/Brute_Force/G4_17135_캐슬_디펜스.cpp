#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n, m, d;
bool arr[15][15];
bool map[15][15];
bool chk[15];
int pos[3]; // 궁수의 포지션 c 좌표
pair<int, int> target[3]; // 목표로 하는 타겟
int maxValue = 0; // 처치한 적의 최댓값

void attack() {
	// 초기화
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			map[i][j] = arr[i][j];
		}
	}

	// 처치한 적의 수
	int cnt = 0;
	// 성 위치
	int castle = n;

	// 맨 아래 1이 남아있을 때까지 반복
	while (castle) {
		for (int i = 0; i < 3; ++i) {
			// x가 1씩 증가하면서 사정거리 내에 적이 있는지를 파악한다. (y는 증가하다가 감소)
			// 없으면 자동으로 마지막 요소가 target에 들어간다. (어짜피 적이 없으므로 나중에 0처리해도 상관이 없음)
			int rr = castle;
			int cc = pos[i];
			// 가장 가까울 때의 거리와 좌표
			int shortestDiff = castle + m;
			int sr = -1;
			int sc = -1;
			// 왼쪽 열부터 순서대로 탐색 (완탐)
			for (int j = 0; j < m; ++j) {
				for (int k = 0; k < castle; ++k) {
					if (map[k][j] == 1 && shortestDiff > abs(rr - k) + abs(cc - j) && abs(rr - k) + abs(cc - j) <= d) {
						shortestDiff = abs(rr - k) + abs(cc - j);
						sr = k;
						sc = j;
					}
				}
			}
			target[i] = make_pair(sr, sc);
		}
		// 해당 턴에 공격받은 타겟 0으로 변경
		for (int i = 0; i < 3; ++i) {
			
			int tr = target[i].first;
			int tc = target[i].second;
			if (tr != -1 && tc != -1 && map[tr][tc]) {
				map[tr][tc] = 0;
				cnt++;
			}
		}
		castle--;
	}

	// max값 갱신
	if (maxValue < cnt) maxValue = cnt;
}

void comb(int start, int cnt) {
	if (cnt == 3) attack();
	else {
		for (int i = start; i < m; ++i) {
			if (!chk[i]) {
				chk[i] = true;
				pos[cnt] = i;
				comb(i + 1, cnt + 1);
				chk[i] = false;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17135 캐슬 디펜스
	// 브루트포스	

	cin >> n >> m >> d;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> arr[i][j];
		}
	}
	
	comb(0, 0);

	cout << maxValue;

    return 0;
}
