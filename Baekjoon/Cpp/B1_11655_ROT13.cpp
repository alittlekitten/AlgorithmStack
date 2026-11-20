#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11655 ROT13
	// 구현
    string s;
    getline(cin, s);

    for (char c : s) {
        if (c >= 'A' && c <= 'Z') c = (c - 'A' + 13) % 26 + 'A';
        else if (c >= 'a' && c <= 'z') c = (c - 'a' + 13) % 26 + 'a';
        cout << c;
    }

	return 0;
}
