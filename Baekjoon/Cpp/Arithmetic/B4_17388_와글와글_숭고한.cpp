#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 17388 와글와글 숭고한
    // 수학
    int s, k, h;
    cin >> s >> k >> h;
    if (s + k + h >= 100) cout << "OK";
    else {
        if (s < k && s < h) cout << "Soongsil";
        else if (k < s && k < h) cout << "Korea";
        else cout << "Hanyang";
    }

    return 0;
}
