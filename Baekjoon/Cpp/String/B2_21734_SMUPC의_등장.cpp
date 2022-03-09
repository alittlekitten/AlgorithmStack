#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 21734 SMUPC의 등장
    // 문자열

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        string tmp = to_string((int)(char)s[i]);
        int num = 0;
        for (int j = 0; j < tmp.size(); ++j) {
            num += tmp[j] - 48;
        }
        
        for (int j = 0; j < num; ++j) {
            cout << s[i];
        }
        cout << '\n';
    }
    
    return 0;
}
