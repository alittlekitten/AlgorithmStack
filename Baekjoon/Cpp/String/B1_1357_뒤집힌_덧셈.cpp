#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1357 뒤집힌 덧셈
    // 문자열
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int tmp = stoi(s1) + stoi(s2);
    string s3 = to_string(tmp);
    reverse(s3.begin(), s3.end());
    cout << stoi(s3);

    return 0;
}
