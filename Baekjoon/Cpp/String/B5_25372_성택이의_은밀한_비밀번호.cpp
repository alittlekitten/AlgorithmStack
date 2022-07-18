#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 25372 성택이의 은밀한 비밀번호
    // 문자열
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> s;
        if (s.size() >= 6 && s.size() <= 9) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}
