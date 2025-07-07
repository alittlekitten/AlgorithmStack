#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30822 UOSPC 세기
	// 문자열
	int n;
	string s;
	int arr[5] = { 0 };
	cin >> n >> s;

	for (int i = 0; i < n; ++i) {
		if (s[i] == 'u') ++arr[0];
		else if (s[i] == 'o') ++arr[1];
		else if (s[i] == 's') ++arr[2];
		else if (s[i] == 'p') ++arr[3];
		else if (s[i] == 'c') ++arr[4];
	}

	sort(arr, arr + 5);
	cout << arr[0];

	return 0;
}
