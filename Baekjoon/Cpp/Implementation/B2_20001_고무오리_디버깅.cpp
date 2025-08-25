#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20001 고무오리 디버깅
	// 구현
	string s;
	stack<int> st;

	while (1) {
		getline(cin, s);
		if (s == "고무오리 디버깅 시작") continue;

		if (s == "문제") st.push(0);
		else if (s == "고무오리") {
			if (st.empty()) {
				st.push(0);
				st.push(0);
			}
			else st.pop();
		}
		else if (s == "고무오리 디버깅 끝") {
			if (st.empty()) cout << "고무오리야 사랑해" << '\n';
			else cout << "힝구" << '\n';
			break;
		}
	}

	return 0;
}
