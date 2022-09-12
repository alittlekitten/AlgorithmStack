#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 4470 줄번호
    // 문자열
    int n;
    string s;
    cin >> n;
    // 첫 공백 제거
    getline(cin, s);
    for (int i = 0; i < n; ++i) {
        getline(cin, s);
        cout << i + 1 << ". " << s << '\n';
    }

	return 0;
}
