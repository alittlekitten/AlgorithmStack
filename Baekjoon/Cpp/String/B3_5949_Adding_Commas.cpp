#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5949 Adding Commas
	// 문자열
	string s;
	stack<char> st;
	cin >> s;

	int cnt = 0;
	for (int i = s.size() - 1; i >= 0; --i) {
		st.push(s[i]);
		++cnt;
		if (cnt == 3 && i != 0) {
			st.push(',');
			cnt = 0;
		}
	}

	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}

	return 0;
}
