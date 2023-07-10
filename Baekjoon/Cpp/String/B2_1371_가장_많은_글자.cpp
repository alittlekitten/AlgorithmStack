#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1371 가장 많은 글자
	// 문자열
	int alpha[26] = { 0 };
	int maxValue = 0;
	while (1) {
		char c = 0;
		cin >> c;
		if (c == 0) break;
		if ('a' <= c && c <= 'z') ++alpha[c - 'a'];
	}
	for (int i = 0; i < 26; ++i) {
		if (maxValue < alpha[i]) maxValue = alpha[i];
	}

	for (int i = 0; i < 26; ++i) {
		if (maxValue == alpha[i]) cout << (char)(i + 'a');
	}

	return 0;
}
