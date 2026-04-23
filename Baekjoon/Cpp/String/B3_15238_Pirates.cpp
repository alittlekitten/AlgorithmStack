#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15238 Pirates
	// 문자열
	int n;
	string s;
	int arr[26] = { 0 };

	cin >> n >> s;

	for (char c : s) ++arr[c - 'a'];

	int maxCnt = 0;
	char maxChar = 'a';

	for (int i = 0; i < 26; ++i) {
		if (arr[i] > maxCnt) {
			maxCnt = arr[i];
			maxChar = 'a' + i;
		}
	}

	cout << maxChar << " " << maxCnt;

	return 0;
}
