#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, input2;
	string input1;
	vector<int> s; // 스택처럼 만들거라
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input1;
		if (input1 == "push") {
			cin >> input2;
			s.push_back(input2);
		}
		else if (input1 == "pop") {
			if (s.size() == 0) cout << -1 << '\n';
			else {
				cout << s.back() << '\n';
				s.pop_back();
			}
		}
		else if (input1 == "size") {
			cout << s.size() << '\n';
		}
		else if (input1 == "empty") {
			if (s.size() == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (input1 == "top") {
			if (s.size() == 0) cout << -1 << '\n';
			else cout << s.back() << '\n';
		}
	}

	return 0;
}
