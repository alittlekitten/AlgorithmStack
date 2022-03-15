#include <iostream>

using namespace std;

bool original[19][19]; // 원래 배열
bool s[19][19]; // 가공용 배열

// 좌표 넣으면 그 위치의 char이 O면 #, #이면 O로 바꿈
void flip(int r, int c) {
	if (s[r][c] == 0) s[r][c] = 1;
	else s[r][c] = 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14927 전구 끄기
	// 비트마스킹, 그리디
	// 맨 윗줄만 검사한다
	// 14939를 풀었다면 같은 방식으로 처리 가능

	int n;
	cin >> n;
	
	int ans = 400; // 최솟값, 18*18 = 324 이므로 넉넉잡고 400 넣기

	// 스트링 입력받기
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> original[i][j];
		}
	}

	int cnt = 0;

	// 비트마스킹으로 맨 윗줄 파악 (전구가 10개니까 2^10)
	for (int i = 0; i < (1 << n); ++i) { 

		// 배열 복사
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < n; ++k) {
				s[j][k] = original[j][k];
			}
		}
		
		cnt = 0; // 매 횟수 체크용
		
		for (int j = n-1; j >= 0; --j) {
			if (i & (1 << j)) {
				flip(0, j); // 자기자리
				flip(1, j); // 아래
				if (j > 0) flip(0, j - 1); // 왼쪽
				if (j < n) flip(0, j + 1); // 오른쪽
				cnt++;
			}
		}

		for (int j = 1; j < n; ++j) {
			for (int k = 0; k < n; ++k) {
				if (s[j - 1][k] == 1) {	// 바로 위의 전구가 켜져있으면 작동
					flip(j, k); // 자기자리
					flip(j - 1, k); // 위
					if (j < n) flip(j + 1, k); // 아래
					if (k > 0) flip(j, k - 1); // 왼쪽
					if (k < n) flip(j, k + 1); // 오른쪽
					cnt++;
				}
			}
		}

		// 다 안꺼졌으면 불가능한 케이스
		bool chk = true;
		for (int j = 0; j < n; ++j) {
			if (s[n - 1][j] == 1) {
				chk = false;
				break;
			}
		} 
		if (!chk) continue;

		if (ans > cnt) ans = cnt;
	}

	if (ans != 400) cout << ans;
	else cout << -1;

  return 0;
}
