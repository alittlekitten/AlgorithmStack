#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// BFS

	int n, k;
	cin >> n >> k;

	// case 1. 수빈 >= 동생 -> 무조건 -1씩 이동해서 동생을 찾아야 한다. 아님 같은 위치에 있든가!
	if (n >= k) cout << n - k;

	// case 2. 수빈 < 동생 -> 큐에 +1, -1, *2 한 값들을 넣으면서 목표한 값이 나올 때까지 BFS를 돌린다.
	else {
		bool chk[100001] = { false, };
		chk[n] = true;
		queue<pair<int, int>> q;
		q.push(make_pair(n, 0));
		while (!q.empty()) {
			int first = q.front().first;
			int second = q.front().second;
			q.pop();
			if (first == k) {
				cout << second;
				break;
			}

			if (first + 1 <= 100000 && !chk[first + 1]) {
				chk[first + 1] = true;
				q.push(make_pair(first + 1, second + 1));
			}
			if (first - 1 >= 0 && !chk[first - 1]) {
				q.push(make_pair(first - 1, second + 1));
				chk[first - 1] = true;
			}
			if (first * 2 <= 100000 && !chk[first * 2]) {
				q.push(make_pair(first * 2, second + 1));
				chk[first * 2] = true;
			}
		}
	}

	
	return 0;
}
