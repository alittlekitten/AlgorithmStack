#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<char, int> alpha;
	while (1) {
		char c = getchar();
		if (c == ' ' || c == '\n' || c == EOF) // 공백, 엔터, \0 이면 종료
			break;
		alpha[toupper(c)]++;
	}
	
	char maxAlphabet;
	int maxnum = 0;

	for (auto iter = alpha.begin(); iter != alpha.end(); ++iter) {
		if (maxnum < iter->second) {
			maxAlphabet = iter->first;
			maxnum = iter->second;
		}
		else if (maxnum == iter->second) {
			maxAlphabet = '?';
		}
	}

	cout << maxAlphabet;
	return 0;
}
