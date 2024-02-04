#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1159 농구 경기
	// 문자열
	int n;
	int alpha[26] = { 0 };
	string s = "abcdefghijklmnopqrstuvwxyz";
	string input;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		++alpha[input[0] - 'a'];
	}

	// 출력할게 있는지 확인하는 용도의 변수
	bool chk = false;
	for (int i = 0; i < 26; ++i) {
		if (alpha[i] >= 5) {
			cout << s[i];
			chk = true;
		}
	}
	if (!chk) cout << "PREDAJA";

	return 0;
}
