#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9093 단어 뒤집기
	// 스택
	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		string s;
		getline(cin, s);
		s += ' ';
		stack<char> st;

		for (char ch : s) {
			if (ch == ' ') {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				cout << ch;
			}
			else st.push(ch);
		}
	}
	return 0;
}
