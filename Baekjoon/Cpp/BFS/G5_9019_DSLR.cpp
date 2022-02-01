#include <iostream>
#include <queue>
#include <string>

using namespace std;

queue<pair<int, string>> q;
bool visited[10000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 9019 DSLR
	// BFS..?? 브루트포스?
	
	int t, start, target;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		fill_n(visited, 10000, false);
		while (!q.empty()) q.pop(); // 큐 비우기
		string answer = "";
		cin >> start >> target;
		q.push(make_pair(start,""));
		while (!q.empty()) {
			int num = q.front().first;
			string str = q.front().second;
			q.pop();

			if (visited[num] == true) continue;
			else {
				visited[num] = true;
				// 1. D
				int numD = (num * 2) % 10000;
				string strD = str +"D";
				if (numD == target) {
					answer = strD;
					break;
				}
				q.push(make_pair(numD, strD));

				// 2. S
				int numS;
				if (num == 0) numS = 9999;
				else numS = num - 1;
				string strS = str + "S";
				if (numS == target) {
					answer = strS;
					break;
				}
				q.push(make_pair(numS, strS));

				// 3. L
				int numL;
				numL = (num * 10) % 10000 + num / 1000;
				string strL = str + "L";
				if (numL == target) {
					answer = strL;
					break;
				}
				q.push(make_pair(numL, strL));

				// 4. R
				int numR;
				numR = (num / 10) + (num % 10) * 1000;
				string strR = str + "R";
				if (numR == target) {
					answer = strR;
					break;
				}
				q.push(make_pair(numR, strR));
			}
		}
		cout << answer << '\n';
	}

	return 0;
}
