#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31403 A + B - C
	// 문자열
	string a, b, c;
	cin >> a >> b >> c;
	cout << stoi(a) + stoi(b) - stoi(c) << '\n' << stoi(a + b) - stoi(c);

	return 0;
}
