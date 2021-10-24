#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool chk[101] = { false };
	bool connect[101][101] = { false };

	int n, couple, input1, input2;
	int answer = 0;
	cin >> n >> couple;

	for (int i = 0; i < couple; ++i) {
		cin >> input1 >> input2;
		connect[input1][input2] = true;
		connect[input2][input1] = true;
	}

	queue<int> q;
	q.push(1);
	chk[1] = true;

	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		for (int i = 1; i <= n; i++) {
			// 아직 방문하지 않은 컴퓨터
			if ((connect[tmp][i] || connect[i][tmp]) && !chk[i]) {
				chk[i] = true;
				q.push(i);
				answer++;
			}
		}
	}
	cout << answer;

	return 0;
}
