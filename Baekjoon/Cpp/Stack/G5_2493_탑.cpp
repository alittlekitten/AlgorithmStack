#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 2493 탑
	// 스택

	int n, tmp;
	stack<pair<int,int>> s;

	cin >> n;
	for (int i = 1; i <= n; ++i) {
		bool chk = false;
		cin >> tmp;
		while (!s.empty()) {
			if (s.top().first > tmp) {
				cout << s.top().second << " ";
				chk = true;
				break;
			}
			else s.pop();
		}
		if (chk == false) cout << 0 << " ";
 		s.push(make_pair(tmp, i));
		
	}

	return 0;
}
