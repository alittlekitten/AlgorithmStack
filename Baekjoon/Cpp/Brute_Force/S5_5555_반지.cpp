#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5555 반지
	// 브루트포스
	string s, input;
	int n;
	int ans = 0;
	cin >> s >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		// 한바퀴 돌리는 용도
		input += input;
		if (input.find(s) != string::npos) ++ans;
	}
	cout << ans;

	return 0;
}
