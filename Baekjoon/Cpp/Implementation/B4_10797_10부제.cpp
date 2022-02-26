#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10797 10부제
    // 빡구현

    int n, a;
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < 5; ++i) {
        cin >> a;
        if (n == a) cnt++;
    }

    cout << cnt;

    return 0;
}
