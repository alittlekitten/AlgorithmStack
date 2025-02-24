#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15725 다항함수의 미분
	// 수학
	int xIdx = -1;
	string s; 
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'x') xIdx = i;
	}

	// 다항식에 x가 없으면 0 출력
	if (xIdx < 0) cout << 0;
	// 1차 일변수 다항식이므로 x위치 앞에 있는 수 출력
	else {
		if (xIdx == 0) cout << 1;
		else if (s[xIdx - 1] == '-') cout << -1;
		else cout << s.substr(0, xIdx);
	}

	return 0;
}
