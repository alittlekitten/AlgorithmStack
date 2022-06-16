#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11718 그대로 출력하기
    // 문자열
    string s;
    getline(cin, s);

    while (s != "\0") {
        cout << s << '\n';
        getline(cin, s);
    }

    return 0;
}
