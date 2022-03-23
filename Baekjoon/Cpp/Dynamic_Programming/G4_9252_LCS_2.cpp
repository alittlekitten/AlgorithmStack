#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int arr[1001][1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9252 LCS 2
	// DP, 문자열
	string s1;
	string s2;
	stack<char> s;

	cin >> s1 >> s2;
	// 1부터 돌리면 첫줄 미리 계산 안해도 됨~!
	for (int i = 1; i <= s1.size(); ++i) {
		for (int j = 1; j <= s2.size(); ++j) {
			if (s1[i-1] == s2[j-1]) arr[i][j] = arr[i - 1][j - 1] + 1;
			else arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
		}
	}

	// 이번엔 끝에서 처음으로 오면서 arr[i-1][j] != arr[i][j], arr[i][j - 1] != arr[i][j]인 요소를 스택에 넣는다
	// 그 외의 경우에는 같은쪽으로 이동 (어짜피 어디로 이동해도 상관없다!)
	int i = s1.size();
	int j = s2.size();
	while (arr[i][j]) {
		if (arr[i][j] == arr[i - 1][j]) --i;
		else if (arr[i][j] == arr[i][j - 1]) --j;
		else {
			s.push(s1[i - 1]);
			--i;
			--j;
		}
	}

	cout << s.size() << '\n';
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}

	return 0;
}
