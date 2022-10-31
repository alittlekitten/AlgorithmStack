#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 15000 CAPS
	// 문자열
    string s;
    string answer = "";
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        answer += s[i]- 32;
    }
    
    cout << answer;

	return 0;
}
