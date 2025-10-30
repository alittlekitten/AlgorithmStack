#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18245 이상한 나라의 암호
	// 문자열
    int i = 1;
    while(1) {
        string s; 
        getline(cin, s);
        if (s == "Was it a cat I saw?") return 0;

        int idx = 0;
        while (idx < s.size()) {
            cout << s[idx];
            idx += (i + 1);
        } 
        cout << '\n';
        ++i;
    }

	return 0;
}
