#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11719 그대로 출력하기 2
	// 문자열
	string text;
	while (getline(cin, text)) {
		cout << text << endl;
	}

	return 0;
}
