#include <iostream>
#include <cstring>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16916 부분 문자열
	// 문자열
	string s, p;
	cin >> s >> p;
	if (strstr(s.c_str(), p.c_str()) != NULL) cout << 1;
	else cout << 0;

	return 0;
}
