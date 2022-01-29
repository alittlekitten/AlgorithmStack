#include <iostream>
#include <string>
using namespace std;

int arr[64][64];

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
		cout << "(";
		DFS(r, c, size / 2);
		DFS(r, c + size / 2, size / 2);
		DFS(r + size / 2, c, size / 2);
		DFS(r + size / 2, c + size / 2, size / 2);
		cout << ")";
	}
	else cout << num;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1992 쿼드트리
	int n;
	string tmp;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> tmp;
		for (int j = 0; j < n; ++j) {
			arr[i][j] = tmp[j]-'0'; // string이라.. char로 자르면 아스키코드가 들어간다..
		}
	}
	
	DFS(0, 0, n);

	return 0;
}