#include <iostream>

using namespace std;

string original[10]; // 원래 배열
string s[10]; // 가공용 배열

// 좌표 넣으면 그 위치의 char이 O면 #, #이면 O로 바꿈
void flip(int r, int c) {
	if (s[r][c] == '#') s[r][c] = 'O';
	else s[r][c] = '#';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14939 불 끄기
	// 비트마스킹, 그리디
	// 맨 윗줄만 검사한다

	// 스트링 입력받기
	
	int ans = 101; // 많아야 100번일테니 (같은 전구를 2번 누르는 일은 없으니까)
	for (int i = 0; i < 10; ++i) {
		cin >> original[i];
	}

	int cnt = 0;

	// 비트마스킹으로 맨 윗줄 파악 (전구가 10개니까 2^10)
	for (int i = 0; i < (1 << 10); ++i) { 
		for (int j = 0; j < 10; ++j) {
			s[j] = original[j];
		}
		
		cnt = 0; // 매 횟수 체크용
		
		for (int j = 9; j >= 0; --j) {
			if (i & (1 << j)) {
				flip(0, j); // 자기자리
				flip(1, j); // 아래
				if (j > 0) flip(0, j - 1); // 왼쪽
				if (j < 9) flip(0, j + 1); // 오른쪽
				cnt++;
			}
		}

		for (int j = 1; j < 10; ++j) {
			for (int k = 0; k < 10; ++k) {
				if (s[j - 1][k] == 'O') {	// 바로 위의 전구가 켜져있으면 작동
					flip(j, k); // 자기자리
					flip(j - 1, k); // 위
					if (j < 9) flip(j + 1, k); // 아래
					if (k > 0) flip(j, k - 1); // 왼쪽
					if (k < 9) flip(j, k + 1); // 오른쪽
					cnt++;
				}
			}
		}

		if (s[9] != "##########") continue; // 다 안꺼졌으면 불가능한 케이스

		if (ans > cnt) ans = cnt;
	}

	if (ans != 101) cout << ans;
	else cout << -1;


    return 0;
}
