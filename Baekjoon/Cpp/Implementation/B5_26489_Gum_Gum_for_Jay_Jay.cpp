#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26489 Gum Gum for Jay Jay
	// 구현
	string s;
	int answer = 0;
	while (!cin.eof()) {
		getline(cin, s);
		++answer;
	}
	
	cout << answer - 1;

	return 0;
}
