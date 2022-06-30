#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 24883 자동완성
    // 문자열
    string s;
    cin >> s;
    if (s == "N" || s == "n") cout << "Naver D2";
    else cout << "Naver Whale";

    return 0;
}
