#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17608 막대기
	// 스택
	int n, h;
	stack<int> s;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> h;
		s.push(h);
	}

	int max = 0;
	int cnt = 0;
	while (n--) {
		if (max < s.top()) {
			max = s.top();
			++cnt;
		}
		s.pop();
	}
	cout << cnt;

	return 0;
}
