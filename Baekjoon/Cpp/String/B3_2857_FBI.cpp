#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2857 FBI
    // 문자열
    int chk = 0;
    string s;
    for (int i = 0; i < 5; ++i) {
        cin >> s;
        if (s.find("FBI", 0) != -1) {
            cout << i + 1 << " ";
            ++chk;
        }
    }
    if (chk == 0) cout << "HE GOT AWAY!";
    
    return 0;
}
