#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 5575 타임 카드
    int a1, a2, a3, b1, b2, b3, h, m, s;
    for (int i = 0; i < 3; ++i) {
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        if (b3 - a3 < 0) {
            b3 += 60;
            --b2;
        }
        s = b3 - a3;
        if (b2 - a2 < 0) {
            b2 += 60;
            --b1;
        }
        m = b2 - a2;
        h = b1 - a1;
        cout << h << " " << m << " " << s << '\n';
    }

    return 0;
} 
