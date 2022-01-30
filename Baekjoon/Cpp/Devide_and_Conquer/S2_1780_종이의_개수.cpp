#include <iostream>
using namespace std;

int arr[2187][2187];
int minusOne = 0;
int zero = 0;
int one = 0;

// 시작점 (r,c), 크기 size
void DFS(int r, int c, int size) {
	bool chk = true;
	int num = arr[r][c];
	for (int i = r; i < r + size; ++i) {
		for (int j = c; j < c + size; ++j) {
			if (arr[i][j] != num) {
				chk = false;
				break;
			}
		}
		if (!chk) break;
	}
	if (!chk) {
		DFS(r, c, size / 3);
		DFS(r, c + size / 3, size / 3);
		DFS(r, c + (size / 3) * 2, size / 3);
		DFS(r + size / 3, c, size / 3);
		DFS(r + size / 3, c + size / 3, size / 3);
		DFS(r + size / 3, c + (size / 3) * 2, size / 3);
		DFS(r + (size / 3) * 2, c, size / 3);
		DFS(r + (size / 3) * 2, c + size / 3, size / 3);
		DFS(r + (size / 3) * 2, c + (size / 3) * 2, size / 3);
	}
	else {
		if (num == -1) minusOne++;
		else if (num == 0) zero++;
		else one++;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1780 종이의 개수
	// DFS
	int n, tmp;
	cin >> n;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j) {
			cin >> arr[i][j];
		}
	}
	
	DFS(0, 0, n);

	cout << minusOne << '\n' << zero << '\n' << one;

	return 0;
}