#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10821 정수의 개수
    string s;
    int cnt = 1;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ',') ++cnt;
    }
    cout << cnt;

	return 0;
}
