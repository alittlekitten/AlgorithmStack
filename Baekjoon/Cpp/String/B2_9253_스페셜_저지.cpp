#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9253 스페셜 저지
	// 문자열
	string a, b, c;
	cin >> a >> b >> c;

	if (a.find(c) != string::npos && b.find(c) != string::npos) cout << "YES";
	else cout << "NO";

	return 0;
}
