#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1152 단어의 개수
    // 문자열
	string s;
	getline(cin, s);

	int cnt = 0;
	bool flag = true;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			flag = true;
		}
		else if (flag) {
			flag = false;
			cnt++;
		}

	}
	cout << cnt;

    return 0;
}
