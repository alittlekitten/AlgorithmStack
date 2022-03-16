#include <iostream>

using namespace std;

int n;
bool arr[10][10];
bool chk1[20]; // 왼쪽 위부터 오른쪽 아래로 /형태로 내려가면서 대각선 체크
bool chk2[20]; // 오른쪽 위부터 왼쪽 아래로 역슬래시 형태로 내려가면서 대각선 체크
int maxBlack = 0;
int maxWhite = 0;

void comb(int r, int c, int cnt) {
	if (c >= n) {
		r++;
		if (c % 2 == 0) c = 1; // 윗줄에서 0으로 시작했으면 다음줄은 1
		else c = 0; // 반대면 다음줄은 0부터 시작
	}

	if (r >= n) {
		if ((r + c) % 2 == 0 && cnt > maxBlack) maxBlack = cnt;
		if ((r + c) % 2 == 1 && cnt > maxWhite) maxWhite = cnt;
		return;
	}

	if (arr[r][c] && !chk1[r + c] && !chk2[r - c + n - 1]) {
		chk1[r + c] = true;
		chk2[r - c + n - 1] = true;
		comb(r, c + 2, cnt + 1);
		chk1[r + c] = false;
		chk2[r - c + n - 1] = false;
	}
	// 브루트포스로 돌아야 하기 때문에 if문 바깥에서 다음 좌표를 comb돌린다
	comb(r, c + 2, cnt);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1799 비숍
	// 백트래킹, 브루트포스

	cin >> n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> arr[i][j];
		}
	}

	// black, white는 서로 영향을 끼치지 않는다!!
	comb(0, 0, 0); // black 돌기
	comb(0, 1, 0); // white 돌기

	cout << maxBlack + maxWhite;
	
    return 0;
}
