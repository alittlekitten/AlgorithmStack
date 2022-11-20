#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // 4806 줄 세기
    // 구현
    int ans = 0;
    string s;
    while (getline(cin, s)) ++ans;
    cout << ans;

    return 0;
}
