#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int dp[100001][5][5]; // idx, left foot, right foot
vector<int> v;

int moveFoot(int now, int next) {
	if (now == next) return 1;
	else if (now == 0) return 2;
	else if ((now == 1 && next == 3) || (now == 2 && next == 4) || (now == 3 && next == 1) || (now == 4 && next == 2)) return 4;
	else return 3;
}

int move(int n, int l, int r) {
	// 끝까지 다 이동했으면 중지
	if (n == v.size()) return 0;
	// 이미 최솟값을 구했으면 그거 가져다 씀
	if (dp[n][l][r] != 0) return dp[n][l][r];
	// 최솟값이 없으면 재귀돌려서 최솟값 구함
	return dp[n][l][r] = min(moveFoot(l, v[n]) + move(n + 1, v[n], r), move(n + 1, l, v[n]) + moveFoot(r, v[n]));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2098 Dance Dance Revolution
	// DP

	int input;

	while (true) {
		cin >> input;
		if (input == 0) break;
		v.push_back(input);
	}

	cout << move(0, 0, 0);

	return 0;
}
