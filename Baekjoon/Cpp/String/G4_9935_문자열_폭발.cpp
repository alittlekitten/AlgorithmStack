#include <iostream>
#include <string>
using namespace std;

// 9935 문자열 폭발
// String

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s, bomb, answer;
	bool chk = false;
	cin >> s >> bomb;

	int sLength = s.size();
	int bombLength = bomb.size();
	
	
	for (int i = 0; i < sLength; ++i) {
		answer += s[i];
		if (s[i] == bomb[bombLength - 1] && i >= bombLength - 1) {
			chk = true;
			// 체크
			for (int j = 1; j < bombLength; ++j) {
				if (answer[answer.size() - (j + 1)] != bomb[bombLength - (j + 1)]) chk = false;
			}
			// 모든 글자가 같으면 그부분 삭제
            if (chk) {
                for (int k = 0; k < bombLength; ++k){
                    answer.pop_back();
                }
            }
		}
	}

	if (answer.empty()) cout << "FRULA";
	else cout << answer;

	return 0;
}
