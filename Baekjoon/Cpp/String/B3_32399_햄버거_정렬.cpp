#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32399 햄버거 정렬
	// 문자열
	string s;
	cin >> s;
	if (s == "(1)") cout << 0;
	else if (s == ")1(") cout << 2;
	else cout << 1;

	return 0;
}
