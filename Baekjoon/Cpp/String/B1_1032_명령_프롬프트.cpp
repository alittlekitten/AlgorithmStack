#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1032 명령 프롬프트
	// 문자열

	int n;
	string input;
	string answer;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (i == 0) answer = input;
		else {
			for (int j = 0; j < input.size(); ++j) {
				if (answer[j] != input[j]) answer[j] = '?';
			}
		}
	}
	
	cout << answer;

	return 0;
}