#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4354 문자열 제곱
	// 문자열, KMP
	string s;

	while (1) {
		int fail[1000001] = { 0 }; // 실패함수 배열
		cin >> s;
		if (s == ".") break;

		// 실패함수 배열 만들기
		int tmp = 0;
		for (int i = 1; i < s.size(); ++i) {
			while (tmp && s[i] != s[tmp]) tmp = fail[tmp - 1];
			if (s[i] == s[tmp]) fail[i] = ++tmp;
		}

		// 전체 string의 길이가 반복 패턴 길이로 나누어 떨어지면 1
		if (s.size() % (s.size() - fail[s.size() - 1])) cout << 1 << '\n';
		// 그게 아니면 가장 큰 n은 전체 string의 길이를 반복 패턴 길이로 나눈 몫
		else cout << s.size() / (s.size() - fail[s.size() - 1]) << '\n';
	}

	return 0;
}
