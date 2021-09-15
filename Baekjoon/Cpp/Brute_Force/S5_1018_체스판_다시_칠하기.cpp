#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	// 무지성 브루트포스
	int n, m, case1, case2;
	int min = 1250;
	vector<string> board;
	string s;
	string a = "BWBWBWBW";
	string b = "WBWBWBWB";
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		cin >> s;
		board.push_back(s);
	}
	// 앞뒤 조심 - 세로 먼저니까 n이 들어가고 그 다음 m!
	for (int i = 0; i < n - 7; ++i) {
		for (int j = 0; j < m - 7; ++j) {
			case1 = 0;
			case2 = 0;
			for (int k = i; k < i + 8; ++k) {
				for (int l = j; l < j + 8; ++l) {
					// 경우의 수 비교 -> W로 시작했으면 다음은 B로 시작! 2로 나눈 나머지로 확인
					if (k % 2 == 0) {
						if (l % 2 == 0) {
							if (board[k][l] == 'B') case1++;
							else case2++;
						}
						else if (l % 2 == 1) {
							if (board[k][l] == 'W') case1++;
							else case2++;
						}
					}
					else {
						if (l % 2 == 0) {
							if (board[k][l] == 'B') case2++;
							else case1++;
						}
						else if (l % 2 == 1) {
							if (board[k][l] == 'W') case2++;
							else case1++;
						}
					}
				}
			}
			// 매 경우마다 최솟값 확인하기
			if (case1 < min) min = case1;
			if (case2 < min) min = case2;
		}
	}

	cout << min;
	return 0;
}
