#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1541 잃어버린 괄호
	// 30 + 40 + 20 - (10 + 20 + 30) - (10 + 10) - 10
	// -가 등장하는 순간 뒤에 있는 숫자들은 전부 빼준다
	string str;
	string tmp;
	int answer = 0;
	bool minus_chk = false;
	cin >> str;

	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == '+' || str[i] == '-') {
			if (minus_chk) answer -= stoi(tmp);
			else answer += stoi(tmp);
			tmp = "";
		}
		else tmp += str[i];
		if (str[i] == '-') minus_chk = true;
		if (i == str.size() - 1) {
			if (minus_chk) answer -= stoi(tmp);
			else answer += stoi(tmp);
		}
	}
	
	cout << answer;

	return 0;
}
