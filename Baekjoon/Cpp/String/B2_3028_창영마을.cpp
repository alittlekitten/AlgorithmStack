#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3028 창영마을
	// 문자열
	string s;
	bool arr[3] = { 1, 0, 0 };
	cin >> s;

	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'A') swap(arr[0], arr[1]);
		else if (s[i] == 'B') swap(arr[1], arr[2]);
		else swap(arr[0], arr[2]);
	}

	for (int i = 0; i < 3; ++i) {
		if (arr[i]) cout << i + 1;
	}

	return 0;
}
